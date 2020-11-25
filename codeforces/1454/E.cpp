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
const int maxn=2001;
const int N = 2e5 + 5;
vector<int> adj[N];
int n;
int cnt;
int vis[N];
int par[N];
int color[N];
set<int> cycle;
 
void find_cycle(int src, int p) {
  if(color[src] == 2) {
    return ;
  }
  if(color[src] == 1) {
    int curr = p;
    cycle.insert(src);
    while(curr != src) {
      cycle.insert(curr);
      curr = par[curr];
    }
    return ;
  }
  par[src] = p;
  color[src] = 1;
  for(auto i : adj[src]) {
    if(i == p) continue;
    find_cycle(i, src);
  }
  color[src] = 2;
}
 
void dfs(int src, int p) {
  cnt++;
  for(auto i : adj[src]) {
    if(i == p || cycle.find(i) != cycle.end()) continue;
    dfs(i, src);
  }
}
 

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
 
cin >> n;
  for(int i = 1; i <= n; i++) {
    adj[i].clear();
    vis[i] = 0;
    color[i] = 0;
  }
  for(int i = 1; i <= n; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  cycle.clear();
  find_cycle(1, 1);
  
  // for(auto sd:cycle)cout<<sd<<" ";
  
  int ans = 0;
  for(auto i : cycle) {
    cnt = 0;
    dfs(i, i);// simply the number of the vertices.
    // cout<<i<<" "<<cnt<<"\n";// count is the number of the vertices; in these subtrees except the cycle pencho
    ans += cnt * (cnt - 1) / 2 + cnt * (n - cnt);


    // frist of all all paths from all to all verties;;   a*b-1/2  we divide by 2 becuase we want only one path then remianging vertices, 2 paths guzarting cycle se pencho
  }
  
  // cout<<"\n";
  cout << ans << endl;








 
 }
 }