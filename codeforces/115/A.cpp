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
const int maxn=2001;
int vis[maxn]={0};

std::vector<int> G[maxn];
int mx=0;
void dfs(int s,int level)
{
	vis[s]=1;
    for(auto c:G[s])
    {
        if(vis[c]==1)continue;
        dfs(c,level+1);
    }
     mx=max(mx,level);

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


int n;
cin>>n;
std::vector<int> root;
F(i,n)
{
	int x;
	cin>>x;
	if(x==-1)root.pb(i);
	else G[x].pb(i);
}

for(auto sd:root)
{
	dfs(sd,1);
}
cout<<mx;
tr;



    }  
 }