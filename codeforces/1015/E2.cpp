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
const int MAXN=1005;
 char a[MAXN][MAXN];
 int up[MAXN][MAXN];
 int down[MAXN][MAXN];
 int left_[MAXN][MAXN];
 int right_[MAXN][MAXN];
 int dp[MAXN][MAXN];
 int mark[MAXN][MAXN];
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
   F(i,n)F(j,m)cin>>a[i][j];
   memset(dp,0,sizeof dp);
   memset(mark,0,sizeof mark);
   memset(up,0,sizeof up);
   memset(down,0,sizeof down);
   memset(left_,0,sizeof left_);
   memset(right_,0,sizeof right_);
   // left;
for(int i=1;i<=n;i++)for(int j=1;j<=m;j++){
   if(a[i][j]=='.')left_[i][j]=0;
   else left_[i][j]=left_[i][j-1]+1;

}


// right
for(int i=1;i<=n;i++)for(int j=m;j>=1;j--){
   if(a[i][j]=='.')right_[i][j]=0;
   else right_[i][j]=right_[i][j+1]+1;
}

// up
for(int j=1;j<=m;j++)for(int i=1;i<=n;i++){
   if(a[i][j]=='.')up[i][j]=0;
   else up[i][j]=up[i-1][j]+1;
}


// down
 for(int j=1;j<=m;j++)for(int i=n;i>=1;i--){
   if(a[i][j]=='.')down[i][j]=0;
   else down[i][j]=down[i+1][j]+1;
}


   std::vector<pair<int,ipair>> v;

// dp computing; the vector the possioble noumber of moves
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=m;j++)
  {
     if(a[i][j]=='.')continue;
     int l=left_[i][j];
     int r=right_[i][j];
     int u=up[i][j];
     int d=down[i][j];
     int c=min(u,min(d,min(l,r)));--c;// cut the current;
     // cout<<c<<" "<<i<<" "<<j;tr;
     if(c>=1)v.pb({c,{i,j}});
     dp[i][j]=c;

  }
}



// F(i,n)
// {
//   F(j,m)cout<<dp[i][j];
//   tr;
// }
 
// marking the row  left and right
for(int i=1;i<=n;i++)
{
  // towards right
  int cur=0;
  for(int j=1;j<=m;j++)
  {
   if(dp[i][j])
   {
     mark[i][j]=1;
     if(cur==0)cur=dp[i][j];
     else
     {
       --cur;// for the current;
       cur=max(dp[i][j],cur);
     }
   }

   if(dp[i][j])continue;
   if(cur)
   {
    --cur;
    mark[i][j]=1;
   }
  }
//*****************************************************************************//
    // towards left
   cur=0;
  for(int j=m;j>=1;j--)
  {
   if(dp[i][j])
   {
     mark[i][j]=1;
     if(cur==0)cur=dp[i][j];
     else
     {
       --cur;// for the current;
       cur=max(dp[i][j],cur);
     }
   }

   if(dp[i][j])continue;
   if(cur)
   {
    --cur;
    mark[i][j]=1;
   }
  }

}




// marking the row  up and down
for(int j=1;j<=m;j++)
{
  // towards right
  int cur=0;
  for(int i=1;i<=n;i++)
  {

   if(dp[i][j])
   {
     mark[i][j]=1;
     if(cur==0)cur=dp[i][j];
     else
     {
       --cur;// for the current;
       cur=max(dp[i][j],cur);
     }
   }

   if(dp[i][j])continue;
   if(cur)
   {
    --cur;
    mark[i][j]=1;
   }
  }
//*****************************************************************************//
    // towards left
   cur=0;
  for(int i=n;i>=1;i--)
  {
   if(dp[i][j])
   {
     mark[i][j]=1;
     if(cur==0)cur=dp[i][j];
     else
     {
       --cur;// for the current;
       cur=max(dp[i][j],cur);
     }
   }

   if(dp[i][j])continue;
   if(cur)
   {
    --cur;
    mark[i][j]=1;
   }
  }

}



//*****************************************************************************************
int flag=0;

F(i,n)
{
  F(j,m)
  {
    if(a[i][j]=='.' && mark[i][j]!=0)flag=1;
    if(a[i][j]=='*' && mark[i][j]!=1)flag=1;
  }
}
if(flag)cout<<"-1\n";
else
{
  cout<<v.size();tr;
  for(auto sd:v)cout<<sd.second.first<<" "<<sd.second.second<<" "<<sd.first<<"\n";
}



 
 
 
 
 
 
 
 
 
 
}
 }