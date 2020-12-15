#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
 // Used to track farthest node. 
int x; 
  vector<int> G[200005];
int mx=0,ind=0;
void dfs(int s,int p,int level)
{
    if(level>=mx)mx=level,ind=s;
    for(auto c:G[s])
    {
        if(c!=p)
        {
          dfs(c,s,level+1);
        }
    }
}
int32_t main() {
 
    io;
  int g=1;
    while (g--){
           int n,k;
           cin>>n>>k;
           queue<int> q;
           int i;
           std::vector<ipair> vc;
           for(i=2;i<=k+1;i++)
           {
                  G[1].pb(i);
                  G[i].pb(1);
                  vc.pb({1,i});
                  q.push(i);
           }
           int one=k+2;
           while(!q.empty())
           {
                  int tp=q.front();
                  q.pop();
                  if(one<=n)
                  {
                         G[tp].pb(one);
                         G[one].pb(tp);
                         vc.pb({one,tp});
                         q.push(one);
                         ++one;
                  }
           }
 
      dfs(1,0,0);
      mx=0;
     dfs(ind,0,0);
     cout<<mx;
     tr;
           
           for(auto sd:vc)cout<<sd.first<<" "<<sd.second<<"\n";

 
 
}
}