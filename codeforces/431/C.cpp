#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <cassert>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <map>
#include <climits>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
 
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<ULL> VULL;
typedef vector<LL> VLL;
 
#define MX 1000000001
#define MN LONG_MIN
#define SZ 5001
#define REP(i, s, e) for(int i = (s); i <= (e); ++i)
#define FOR(i, s, n) for(int i = (s); i < (n); ++i)
#define FORALL(i, n) for(int i = 0; i < (n); ++i)
#define ZERO(box) memset(box, 0, sizeof(box))
#define pushb push_back
#define MOD 1000000007
 
ifstream fin ("input.txt");
ofstream fout ("output.txt");
 
int main() {
	int n, k, d;
	cin >> n >> k >> d;
	LL w[n+1], wod[n+1];
	ZERO(w); ZERO(wod);
	FORALL(i, n+1) {
		if (i <= k) {
			w[i] = 1;
			if (i < d) wod[i] = 1;
		}
	}
	w[0] = 0, wod[0] = 0;
	FOR(i, 1, n+1) {
		FOR(j, 1, k+1) {
			if (i < j) continue;
			w[i] = (w[i] + w[i-j]) % MOD;
		}
	}
	FOR(i, 1, n+1) {
		FOR(j, 1, k+1) {
			if (i < j) continue;
			if (j < d) wod[i] = (wod[i] + wod[i-j]) % MOD;
		}
	}
	cout << (w[n] - wod[n] + MOD) % MOD << endl;
	return 0;
}
