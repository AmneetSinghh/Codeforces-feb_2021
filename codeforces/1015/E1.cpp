/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int MAXN=100004;
 
bool comp(ipair &a,ipair &b)
{
  if(a.first>b.first)return true;
 
  return false;
}
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {
 
    int n,m;
  cin>>n>>m;
  char a[n+1][m+1];
  char b[n+1][m+1];
  F(i,n)F(j,m)b[i][j]='.';
  F(i,n)F(j,m)cin>>a[i][j];
  int flag=0;
  std::vector<  pair<int,pair<int,int>>  > v;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
 
        if(a[i][j]!='*')continue;
          int left=0,right=0,up=0,down=0;
          int ff=i-1;
          int ff_=i+1;
          int ss=j-1;
          int ss_=j+1;
          while(ff>0)
          {
            if(a[ff][j]=='*')++up;
            else break;
            --ff;
          }
          while(ff_<=n)
          {
            if(a[ff_][j]=='*')++down;
            else break;
            ++ff_;
          }
          while(ss>0)
          {
            if(a[i][ss]=='*')++left;
            else break;
            --ss;
          }
          while(ss_<=m)
          {
            if(a[i][ss_]=='*')++right;
            else break;
            ++ss_;
          }
 
        int c=min(down,min(up,min(left,right)));
        if(c<=0)continue;
        b[i][j]='*';
        v.pb({c,{i,j}});
         ff=i-1;
         ff_=i+1;
         ss=j-1;
         ss_=j+1;
         int temp=c;
          while(ff>0 && temp>0)
          {
            b[ff][j]='*';
            --ff;
            --temp;
          }
          temp=c;
          while(ff_<=n && temp>0)
          {
            b[ff_][j]='*';
            ++ff_;
            --temp;
          }
          temp=c;
          while(ss>0 && temp>0)
          {
            b[i][ss]='*';
            --ss;
            --temp;
          }
          temp=c;
          while(ss_<=m && temp>0)
          {
            b[i][ss_]='*';
            ++ss_;
            --temp;
          }
    }
  }
 
 
 
F(i,n)
{
  F(j,m)
  {
    if(a[i][j]!=b[i][j])flag=1;
  }
}
 
  if(flag)cout<<"-1";
  else
  {
    cout<<v.size();tr;
    for(auto sd:v)
    {
      cout<<sd.second.first<<" "<<sd.second.second<<" "<<sd.first;tr;
    }
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 }