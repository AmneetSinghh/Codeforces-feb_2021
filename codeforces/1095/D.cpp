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

std::vector<int> G[200005];
std::vector<int> vc;
int n;
int vis[200005]={0};
void dfs(int s)
{
    if(!vis[s])
    {
    vc.pb(s);
    vis[s]=1;
    int one=G[s][0];
    int two=G[s][1];
    int flag=0;
    for(auto c:G[one])if(c==two)flag=1;

    if(flag==1)dfs(one);
    else dfs(two);
    }
    
}

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outputt.txt","w",stdout);

#endif
    io;
   int t=1;
    while (t--){
        cin>>n;
F(i,n)
{
    int x,y;
    cin>>x>>y;
    G[i].pb(x),G[i].pb(y);

}

dfs(1);

if(n==3){cout<<"1 2 3";return 0;}
for(auto sd:vc)cout<<sd<<" ";
    tr;
  


    }  
 }

