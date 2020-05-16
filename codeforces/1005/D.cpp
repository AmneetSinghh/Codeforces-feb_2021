#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
 
using namespace std;
 
#define int long long
#define endl '\n'
#define maxn 100010
const int MOD = 1000000007;
 
void solve() {
    string s;
    cin >> s;
 
    map<int, int> mp;
    mp[0]++;/// 0 means already has the one elemnt.
    int n = s.size();
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) 
    {
        int cur = s[i] - '0';
        if (cur == 0) {
            mp.clear();sum = 0;mp[0]++;ans++;continue;
            // zero menas tat we have to start form the first element bor
        }
        sum += cur;
        sum %= 3;
        if (mp[sum] > 0) {
            mp.clear();
            sum = 0;
            ans++;
        }
        mp[sum]++;
    }
    cout << ans << endl;
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
