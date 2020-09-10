#include<bits/stdc++.h>

#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define fo(i, n) for(int i=n;i>=0;i--)
#define F(i, n) for(int i=1;i<=n;i++)
#define f_a(a, i, n) for(int i=a;i<=n;i++)
#define f_b(a, i, b) for(int i=a;i<=b;i++)
#define FO(i, n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define tr cout<<"\n"
#define br break
#define N 300005
#define inf 10000000000000009
/*  I know I have that Ability, I can do anything, 
I'll be The Candidate Master 
(Patience and Practice)  */
int n, m, u, v, w, k;
vector<ipair > G[100005];
vector<int > M[100005];

void dijkstra(int s, int d) {
    vector<int> dis(n+1,inf);    
    priority_queue<ipair, vector<ipair>, greater<ipair>> q;
    dis[s] = 0;
    q.push({0, s});
    
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();

        int add=0;
        if(M[v].empty()==false)
        {
        	auto lo=lower_bound(M[v].begin(),M[v].end(),d_v);
        	if(*lo==d_v)
        	{
        	int id=lo-M[v].begin(),val=*lo;
        	while(id<M[v].size() && M[v][id]==val)++val,id++,add++;

        	}
        }

        for (auto edge : G[v]) {
            int to = edge.first;
            int len = edge.second;/// this is the weight
            if (d_v + len + add <dis[to]) {
                dis[to] =d_v + len + add;
                q.push({dis[to], to});
            }
        }

    }
    
    if(dis[n]==inf)cout<<"-1";
    else cout<<dis[n];
    tr;
}

void Waheguru() {
    cin >> n >> m;
    F(i, m) {
        cin >> u >> v >> w;
        G[u].pb({v, w});
        G[v].pb({u, w});
    }
    F(i, n) {
        cin >> k;
        M[i].pb(-1);
        F(j, k)cin >> v, M[i].pb(v);
        M[i].pb(1e14);
    }

    dijkstra(1, n);


}


int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    io;
    int g = 1;
    while (g--)Waheguru();
    return 0;
}