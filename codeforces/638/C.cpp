/* It's Practice time */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 1000000000000000000
#define inf 1000000000009
using namespace std;

//                  Make your segment tree library;// for all the basic operations;
/*
**Learnings** while solving 250:

1: s=a+b=(a^b)+(a&b)*2;
(a&b)=((a+b)-(a^b))/2;
*/
int n;
int a[200005],dp[200005]={0};
bool vis[200005];
set<int> s[200005];
std::vector<ipair> G[200005];
std::vector<int> ans[200005];
void dfs(int cur){
  set<int>::iterator it=s[cur].begin();
  int k=1;
  vis[cur]=true;
  for(auto child:G[cur]){
    if(vis[child.first]==false){
      while(it!=s[cur].end() && (*it)==k){k++,it++;}// next valuee;
      dp[child.second]=k;
      s[child.first].insert(k);++k;
      dfs(child.first);// next child;
    }
  }
}
void Not_Stable()
{
memset(vis,false,sizeof vis);
cin>>n;
F(i,n-1){
  int u,v;
  cin>>u>>v;
  G[u].pb({v,i});
  G[v].pb({u,i});
  a[v]++;
  a[u]++;
}
cout<<(*max_element(a,a+n+1));tr;
dfs(1);// start from one;
int u=*max_element(a,a+n+1);
F(i,n)ans[dp[i]].pb(i);
F(i,u){
  cout<<ans[i].size()<<" ";
  for(auto sd:ans[i])cout<<sd<<" ";
    tr;
}


}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}