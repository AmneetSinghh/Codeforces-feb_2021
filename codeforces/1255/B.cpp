#include <bits/stdc++.h>
#define maxn 100100
using namespace std;
vector <int> a[maxn];
int count[maxn],vis[maxn];
 
int main()
{
int t;cin>>t;
while(t--)
{
	vector<pair<int,int>> vc;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int value;
		cin>>value;
		vc.push_back(make_pair(value,i));
	}
	
	int cum=m-n;
	int sum=0;
	for(int i=0;i<vc.size();i++)
	{
		if(i+1==vc.size())
		sum+=(vc[i].first+vc[0].first);
		else
		sum+=(vc[i].first)+(vc[i+1].first);
	}
    
	if(n==2 || m<n)
	cout<<"-1\n";
	else
	{
		cout<<sum<<endl;
		for(int i=0;i<vc.size();i++)
		{
		if(i+1==vc.size())
		cout<<vc[i].second<<" "<<vc[0].second<<endl;
		else
		cout<<vc[i].second<<" "<<vc[i+1].second<<endl;
		}
		
	}
	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
