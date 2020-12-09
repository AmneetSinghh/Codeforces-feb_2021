#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod  998244353
#define inf 1000000000000
using namespace std;


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outputt.txt","w",stdout);
#endif
    io;
   int t=1;
    while (t--)
    {

  int n,m,k;
  cin>>n>>k;
  char a[n+1][n+1];
  F(i,n)F(j,n)cin>>a[i][j];
  int dp[n+1][n+1];
  memset(dp,0,sizeof dp);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {

      if(a[i][j]=='#')continue;
      int c=0,c1=0,c2=0,c3=0;
      for(int l=i;l<=n;l++)
      {
         if(a[l][j]=='.')c++;// dowon
         else break;
      }

      for(int l=j;l<=n;l++)
      {
         if(a[i][l]=='.')c2++;//right
         else break;
      }

      for(int l=j;l>=1;l--)
      {
         if(a[i][l]=='.')c3++;// left
         else break;
      }
      for(int l=i;l>=1;l--)
      {
         if(a[l][j]=='.')c1++;// up
         else break;
      }




      if(c>=k){for(int l=i;l<=i+k-1;l++)dp[l][j]+=1;}
      if(c2>=k){for(int l=j;l<=k+j-1;l++)dp[i][l]+=1;}
      if(c3>=k){for(int l=j;l>=j-k+1;l--)dp[i][l]+=1;}

      if(c1>=k){for(int l=i;l>=i-k+1;l--)dp[l][j]+=1;}





    }
  }

int mx=0;
int r=0,c=0;
  F(i,n)
  {
    F(j,n)
    {
     if(dp[i][j]>=mx)mx=dp[i][j],r=i,c=j;
    }
  }
  cout<<r<<" "<<c;
  tr;




    }  
 }