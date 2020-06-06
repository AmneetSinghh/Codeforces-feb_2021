#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define endl '\n'
#define maxn 400010
const int MOD = 1000000007;
 
vector<int> g[maxn];
int visited[maxn];
 
void dfs(int u) {
    visited[u] = true;
    for (auto x : g[u]) {
        if (!visited[x]) {
            dfs(x);
        }
    }
}
 
void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        b += n;/// 1 2 3 4 5 6 6 7 this is the new concept babu
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ct = 0;
    for (int i = 1; i <= n + m; i++)if (!visited[i])dfs(i), ct++;
    cout << ct - 1 << endl;//// this is equla to the total connected components -1 babu
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
//    cin >> t;
 
    while (t--)
        solve();
    return 0;
}
