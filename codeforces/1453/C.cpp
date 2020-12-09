#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
bool check(int n, int k) 
{ 
        if (n & (1 << (k - 1))) return 1;    else return 0;
} 
// function to set the kth bit 
int setKthBit(int n, int k) 
{ 
    return ((1 << (k-1)) ^ n); 
} 

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outputt.txt","w",stdout);
#endif
    io;
   int t;cin>>t;
    while (t--)
    {

    
int n;
cin>>n;
char a[n+1][n+1],b[n+1][n+1];
F(i,n)F(j,n){
  char c;cin>>c;
  a[i][j]=(int)c;
  b[j][i]=(int)c;
}

for(int k=0;k<=9;k++)
{
    int cost=0;
    int up=n,down=1;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
         if(a[i][j]-'0'==k)
         {
         up=min(up,i),down=max(down,i);
         }
      }
    }



    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        if(a[i][j]-'0'==k)
        {
      int left=abs(j-1);
      int right=abs(j-n);
      int niche=abs(i-down);
      int uper=abs(i-up);
      cost=max(cost,left*niche);
      cost=max(cost,right*niche);
      cost=max(cost,left*uper);
      cost=max(cost,right*uper);
        }
      
      }
      
    }

     up=n,down=1;
     for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
         if(b[i][j]-'0'==k)
         {
         up=min(up,i),down=max(down,i);
         }
      }
    }

    
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        if(b[i][j]-'0'==k)
        {
      int left=abs(j-1);
      int right=abs(j-n);
      int niche=abs(i-down);
      int uper=abs(i-up);
      cost=max(cost,left*niche);
      cost=max(cost,right*niche);
      cost=max(cost,left*uper);
      cost=max(cost,right*uper);
        }
      
      }
      
    }

















    cout<<cost<<" ";
}

tr;








    }  
 }