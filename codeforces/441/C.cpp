#include <bits/stdc++.h>
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
int main()
{
	int n,m,k;cin>>n>>m>>k;

	
	int j=1;
	vector<pair<int,int>> vc;
	for(int i=1;i<=n;i++)
	{
		if(j==1)
		{
			for(j=1;j<=m;j++)
				vc.push_back(make_pair(i,j));
			j=m;
		}
		else if(j==m)
		{
			for(j=m;j>=1;j--)
					vc.push_back(make_pair(i,j));
			j=1;
		}
	}
	
	int i=0;
	int start=0;
	int pre=0;
	while(true)
	{
		if(k==1)
		{
			cout<<(vc.size()-pre)<<" ";
			for( i=start;i<vc.size();i++)
			cout<<vc[i].first<<" "<<vc[i].second<<" ";
			
		   break;
		}
		else
		{
			cout<<"2 ";
			pre+=2;
			for( i=start;i<pre;i++)
			cout<<vc[i].first<<" "<<vc[i].second<<" ";
			
			cout<<endl;
			--k;
			start=pre;
			
		}
	}
}
