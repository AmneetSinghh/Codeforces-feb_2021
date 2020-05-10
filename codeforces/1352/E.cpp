#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> cnt(n + 1);// memory limit is o(n) baby
		int ans = 0;
		for (auto &it : a) {
			cin >> it;
			++cnt[it];
		}
		for (int l = 0; l < n; ++l) {
			int sum = 0;
			for (int r = l; r < n; ++r) {
				sum += a[r];
				if (l == r) continue;
				if (sum <= n) {
					ans += cnt[sum];// if true houga bn jauga else its not conted, bro
					cnt[sum] = 0;// we make it so no need again bro
				}
			}
		}
		cout << ans << endl;
	}
}
