#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")
 
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"
 
#define ll long long
#define pie_value 3.14159265358979323846
 
int main() {
 
	// Use ctrl+shift+b ( second option )
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt" , "w" , stderr);
#endif
 
	ll t;
	cin >> t;
 
	while (t--) {
 
		ll h, c, t;
		cin >> h >> c >> t;
 
		if (t == h) {
			cout << "1" << "\n";
			continue;
		} else {
			if (2 * t <= (h + c)) {
				cout << "2" << "\n";
			} else {
 
				ll x = (t - c) / (2 * t - h - c);
				ll y = x + 1;
 
				long double try1 = ((x * h) + (x - 1) * c) / (1.0 * (2 * x - 1));
				long double try2 = ((y * h) + (y - 1) * c) / (1.0 * (2 * y - 1));
 
				long double diff1 = abs(try1 - t);
				long double diff2 = abs(try2 - t);
 
				if (diff1 <= diff2) {
					cout << 2 * x - 1 << "\n";
				} else {
					cout << 2 * y - 1 << "\n";
				}
			}
		}
 
	}
 
 
	return 0;
}
