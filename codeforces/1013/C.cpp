#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define int long long
#define endl '\n'
#define maxn 500005

int32_t main(){

int n;cin>>n;
vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++)cin >> v[i];
    sort(v.begin(), v.end());
    int mn = LLONG_MAX;
    for (int i = 1; i < n; i++)mn = min(mn, (v[n + i - 1] - v[i]));
    cout << min(mn * (v[2 * n - 1] - v[0]), /* this is the first NO OVERLAPPING */ (v[n - 1] - v[0]) * (v[2 * n - 1] - v[n]));

}
//1 2 3 4 5 6 7 8
