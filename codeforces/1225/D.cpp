#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
 
	ll n,k,a,ans=0,x;
	cin>>n>>k;
 
	map<vector<pair<int, int> >, int> d;
	for(int i=0;i<n;i++) 
	{
		cin>>a;
		vector<pair<int, int> > g, h;
		for(int j=2;j*j<=a;++j) 
		{
			x=0;
			while(a%j==0) 
			{
				x++;
				a/=j;
			}
			if(x%k) {
				g.push_back(make_pair(j, x%k));
			}
		}
		
		if(a>1) g.push_back(make_pair(a, 1));
		
		for(int j=0; j<g.size(); ++j) 
			h.push_back(make_pair(g[j].first, k-g[j].second));
		
		
		
		ans+=d[h];
		d[g]++;

	}
 
	cout << ans;
 
}

