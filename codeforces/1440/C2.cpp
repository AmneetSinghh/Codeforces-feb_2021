// Time for the Linked-List
 
 
 
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
 
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009
 
using namespace std;
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;
 
 
void Not_Stable()
{
 int n,mm;cin>>n>>mm;
 char a[n+1][mm+1];
  F(i,n)F(j,mm)cin>>a[i][j];
 
 // 2 2 blocks;
 std::vector<std::vector<int> > v;

 // This logic is for c2 we have to cut the odd row and odd col if they exist pencho



if(n%2==1)
{
  for(int j=1,i=n;j<=mm;j++)
  {
    vector<int> m;
    int val=a[i][j]-'0';
    if(val==1)
    {
       if(j<=mm-1)m.pb(i),m.pb(j),m.pb(i-1),m.pb(j),m.pb(i-1),m.pb(j+1),v.pb(m),m.clear(),a[i][j]^=1,a[i-1][j]^=1,a[i-1][j+1]^=1;
      else m.pb(i),m.pb(j),m.pb(i-1),m.pb(j),m.pb(i-1),m.pb(j-1),v.pb(m),m.clear(),a[i][j]^=1,a[i-1][j]^=1,a[i-1][j-1]^=1;
    }
  }
  --n;
}

if(mm%2==1)
{
  for(int i=1,j=mm;i<=n;i++)
  {
       int val=a[i][mm]-'0';
       vector<int> m;
    if(val==1)
    {
       if(i<=n-1)m.pb(i),m.pb(j),m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j-1),v.pb(m),m.clear(),a[i][j]^=1,a[i+1][j-1]^=1,a[i][j-1]^=1;
      else m.pb(i),m.pb(j),m.pb(i),m.pb(j-1),m.pb(i-1),m.pb(j-1),v.pb(m),m.clear(),a[i][j]^=1,a[i][j-1]^=1,a[i-1][j-1]^=1;
    }
  }
  --mm;
}

// /// Same logic as the C1 pencho;

 for(int i=1;i<=n;i+=2)
 {
   for(int j=2;j<=mm;j+=2)
   {
     // no zero;
    int l=a[i][j-1]-'0';// 11
    int r=a[i][j]-'0';//12
    int l1=a[i+1][j-1]-'0';//21
    int l2=a[i+1][j]-'0';//22
    int c=0;
    if(l==0)c++;  if(l1==0)c++; if(l2==0)c++; if(r==0)c++;
 
    if(c==0)
    {
      // 4 operations
       std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j);v.pb(m);//l l1 l2
       m.clear();
       m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j);v.pb(m);//l r l2
 m.clear();       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);// l l1 r
 m.clear();       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
 
    }// only one zero;
    else if(c==1)
    {
      // just one  operation
        if(l==1 && l1==1 &&r==1)
        { std::vector<int> m;
       m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
        else if(l==1 && l2==1 &&r==1)
        {
          std::vector<int> m;
       m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
        else if(l==1 && l1==1 &&l2==1)
        {
               std::vector<int> m;
       m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1);v.pb(m);//l2 l1 r
        }
        else if(l1==1 && l2==1 &&r==1)
        {
         std::vector<int> m;
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
    }
    else if(c==3)
    {
       std::vector<int> m;
      if(l==1)
      {
       m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j-1);v.pb(m), m.clear();
       a[i][j-1]^=1,a[i][j]^=1,a[i+1][j-1]^=1;
      }
      else if(r==1)
      {
        m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j);v.pb(m), m.clear();
        a[i][j-1]^=1,a[i][j]^=1,a[i+1][j]^=1;
      }
      else if(l1==1)
      {
        m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j-1);v.pb(m), m.clear();
        a[i][j-1]^=1,a[i][j]^=1,a[i+1][j-1]^=1;
      }
      else if(l2==1)
      {
         m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j);v.pb(m), m.clear();
         a[i][j-1]^=1,a[i][j]^=1,a[i+1][j]^=1;
      } 
       l=a[i][j-1]-'0';// 11
       r=a[i][j]-'0';//12
       l1=a[i+1][j-1]-'0';//21
       l2=a[i+1][j]-'0';//22
       goto gr;

 
    }
    else if(c==2)
    {
      // 6 cases;   2 operations
      gr:
      if(l==0 && l2==0)
      {
        std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1);v.pb(m);//l2 l1 r
      }
      else if(l1==0 && r==0)
      {
        std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
      }
      else if(l==0 && r==0)
      {
      std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j);v.pb(m);//l2 l1 r
        m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i),m.pb(j-1);v.pb(m);//l2 l1 r
      }
      else if(l1==0 && l2==0)
      {
        std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
      }
 
 
      else if(l1==0 && l==0)
      {
         std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
      }
      else if(r==0 && l2==0)
      {
       std::vector<int> m;
       m.pb(i),m.pb(j),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
      }
    }
 
 
        a[i][j]='0',a[i][j-1]='0',a[i+1][j-1]='0',a[i+1][j]='0';
 
 
   }
 }
 
cout<<v.size();
tr;
 for(int i=0;i<v.size();i++)
 {
  for(auto sd:v[i])cout<<sd<<" ";
    tr;
 }
 
 
 
 
}
 
 
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}