#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define endl '\n'
#define maxn 100010
const int MOD = 1000000007;
 
int x, a;
int y, b;
int k, lcm;
 
bool can(int n, vector<int> &p) {
    int id = 0, cmn = n / lcm;
    int ans = 0;
    for (int pt = 0; id < p.size() and pt < cmn; id++) {
        ans += (x + y) * p[id] / 100;
        pt++;
    }
    int canda = n / a - cmn, candb = n / b - cmn;
    // first we willl give the a because x is the largest bro so we have to give it to the mos texpensive persons, bro
    for (int pt = 0; id < p.size() and pt < canda; pt++, id++)ans += x * p[id] / 100;
    for (int pt = 0; id < p.size() and pt < candb; pt++, id++)ans += y * p[id] / 100;
 
    return ans >= k;
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> p(n);
    for (int i = 0; i < n; i++)cin >> p[i];
    sort(p.rbegin(), p.rend());
    
    cin >> x >> a;
    cin >> y >> b;
    cin >> k;
 
    if (x < y)swap(x, y), swap(a, b);
 
    lcm = (a * b) / __gcd(a, b);
    int l = 0, h = n, mid, ans = -1;
    while (l <= h) {
        mid = l + h >> 1;
        if (can(mid, p)) {
            h = mid - 1;
            ans = mid;
        } else l = mid + 1;
    }
    cout << ans << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--)
        solve();
    return 0;
}
