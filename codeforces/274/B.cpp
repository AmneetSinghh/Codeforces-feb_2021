// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 998244353
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
#define range 100000000000000
// directions
vector<int> G[N];
int v[N],ans=0,n,a,b;
int dp[N][3];
void dfs(int s,int p)
{
    for(auto c:G[s])
    {
        if(c!=p){
            dfs(c,s);
            dp[s][1]=max(dp[s][1],dp[c][1]);
            dp[s][2]=max(dp[s][2],dp[c][2]);
 
        }
    }
    v[s]+=dp[s][1];
    v[s]-=dp[s][2];
    if(v[s]<0)dp[s][1]+=abs(v[s]);
    else      dp[s][2]+=v[s];
 
}
 
 
void Pencho()
{
cin>>n;
F(i,n-1)
{
    cin>>a>>b;
    G[a].pb(b),G[b].pb(a);
}
F(i,n)cin>>v[i];
dfs(1,0);
cout<<dp[1][1]+dp[1][2];
tr;
}
 
 
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Pencho();
    return 0;
}