/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=100005;
#define print(s) cout<<s;
const int N = 100005;
std::vector<int> G[N];
int vis[N]={0};


//dfs
int mi=inf;
int a[N];
void dfs(int s)
{
	vis[s]=1;
	mi=min(a[s],mi);
    for(auto c:G[s])
    {
        if(vis[c]==1)continue;
        dfs(c);

    }
}

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outpt.txt","w",stdout);
#endif
    io;
   int t=1;
    while (t--)
    {
    	int n,m;
    	cin>>n>>m;
    	F(i,n)cin>>a[i];
    	F(i,m)
    	{
    		int x,y;
    		cin>>x>>y;
    		G[x].pb(y),G[y].pb(x);
    	}
int cost=0;
    	for(int i=1;i<=n;i++)
    	{
    		mi=inf;
    		if(!vis[i])dfs(i),cost+=mi;
    	}
    	cout<<cost;
    	tr;

    }  
 }