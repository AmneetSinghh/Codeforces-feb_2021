#include<bits/stdc++.h>
using namespace std;
pair<int, string> a[3010];
int ans[3010];
int main()
{int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].second >> a[i].first;
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		int len = i - a[i].first;// how many we have to increment to be greater
		if (len < 0) { cout << -1; return 0; }
		ans[i] = len;
		for (int j = 0; j < i;j++)
		if (ans[j] >= ans[i]) ans[j]++;
	}
	for (int i = 0; i < n; i++)
		cout << a[i].second << " " << 3000 + ans[i] << endl;
 
}
