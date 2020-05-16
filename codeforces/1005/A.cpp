// by harry singh
/* ********************************NOTES*****************************
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
		ll n;cin>>n;
		ll a[n+1];
		ll hash[n+1]={0};
		if(n==1)
		cout<<"1\n1\n";
		else
		{
			for(int i=1;i<=n;i++)cin>>a[i];
		vector<int> vc;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1 && i==1)continue;
			if(a[i]==1)vc.push_back(a[i-1]);
		}
		vc.push_back(a[n]);
		cout<<vc.size()<<endl;
		for(auto sd:vc)
		cout<<sd<<" ";
		cout<<endl;
		}
		
		
		
		
		
		
}
