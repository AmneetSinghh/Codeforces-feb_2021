
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)

using namespace std;

int main()
{
	
int q;
cin>>q;
while(q--)
{
	int n,r;
	cin>>n>>r;
	set<int,greater<int> > s;
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		s.insert(d);
	}
	int count=0;
	for(auto sd: s)
	{
		if(count>0)
		{
		auto f=(sd)- (count*r);
		if(f<=0)
		break;
		}
		
		++count;
	}
	cout<<count<<endl;
	
	
	
}
}
