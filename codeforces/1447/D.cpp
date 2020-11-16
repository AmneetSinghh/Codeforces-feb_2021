// Time for the Linked-List



#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
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
int n,m;
string a,b;
int dp[5001][5001];
int cal(int i,int j)
{
  if(i>=n || j>=m)return 0;
  if(dp[i][j]!=-1)return dp[i][j];
  int ans=0;
  if(a[i]==b[j])ans=max(ans,cal(i+1,j+1)+2);
  ans=max(ans,cal(i+1,j+1)-2);// skip both
  ans=max(ans,cal(i+1,j)-1);// skip one
  ans=max(ans,cal(i,j+1)-1);// skip one
  return dp[i][j]=ans;
}
void Not_Stable()
{
  cin>>n>>m;
  cin>>a>>b;
  memset(dp,-1,sizeof dp);
  int ans=0;
  ans=max(ans,cal(0,0));
  f(i,n)f(j,m)ans=max(ans,dp[i][j]);
  cout<<ans;
  tr;
}


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}