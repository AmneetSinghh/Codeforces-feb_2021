#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define endl '\n'
#define maxn 100010
const int MOD = 1000000007;
 
void cslnb() {
    cout << "cslnb" << endl;
    exit(0);
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int ct = 0;
    for (auto x: mp) {
        if (x.second > 2 or (x.second == 2 and mp[x.first - 1] > 0)) {
            cslnb();
        }
        if (x.second == 2)ct++;
        if (x.second == 2 and x.first == 0) {
            cslnb();
        }
    }
    if (ct > 1) {
        cslnb();
    }
    sort(v.begin(), v.end());
    int tot = 0;
    for (int i = 0; i < v.size(); i++) {
        int zp = v[i] - i;
//        if(zp < 0){
//            cslnb();
//        }
        zp %= 2;
        if (zp)tot ^= 1;
    }
    if (!tot)cout << "cslnb" << endl;
    else cout << "sjfnb" << endl;
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
