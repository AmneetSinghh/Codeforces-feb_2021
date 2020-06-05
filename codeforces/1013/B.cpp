#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define int long long
#define endl '\n'
#define maxn 500005

int32_t main() {

    int n, k;
    cin >> n >> k;
    int a[100005];
    int mp[100005] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        int tp = a[i] & k;
//        cout << tp << " ";
        mp[a[i]]++;
    }

//    cout << (15 & 16) << " " << (14 & 16) << endl;
    int f = 0;
    for (int i = 0; i <= 100002; i++)
        if (mp[i] >= 2)f = 1;
    if (f == 1)
        cout << "0\n";
    else {
        for (int i = 1; i <= n; i++) {
            int value = a[i] & k;
            if (value == a[i])continue;
            if (mp[value]) {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "1\n";
        else {
            int hash[100005] = {0};
            for (int i = 1; i <= n; i++) {
                int value = a[i] & k;
                hash[value]++;
            }

            for (int i = 0; i <= 100002; i++) {
                if (hash[i] > 1) {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                cout << "2\n";
            else
                cout << "-1\n";
        }
    }
}
