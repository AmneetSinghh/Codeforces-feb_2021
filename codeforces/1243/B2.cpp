#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;cin>>t;
	while(t--)
	{
		string a,b;int n;
		cin>>n;
		cin>>a;cin>>b;
		vector<   pair<int,int>   > vc;
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[i])
			continue;
			else
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[i]==a[j])
					{
						swap(b[i],a[j]);
						vc.push_back(make_pair(j+1,i+1));
						break;
					}
					
					if(a[i]==b[j])
					{
						swap(b[j],a[j]);
						swap(b[i],a[j]);
						vc.push_back(make_pair(j+1,j+1));
						vc.push_back(make_pair(j+1,i+1));
						break;
					}
					
				}
			}
		}
		
		
		if(a!=b)
		cout<<"No\n";
		else
		{
			cout<<"Yes\n";
			cout<<vc.size()<<endl;
			for(int i=0;i<vc.size();i++)
			{
				cout<<vc[i].first<<" "<<vc[i].second<<endl;
			}
		}
	}
	
}
