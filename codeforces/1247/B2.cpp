// same thing for thiud code. rb o

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k,d;cin>>n>>k>>d;
		int a[n];
 
		map<int,int> mp;
		for(int i=0;i<n;i++)
			cin>>a[i];
 
		for(int i=0;i<d;i++)
			mp[a[i]]++;
 
		int p=mp.size();
		int l=p;
		for(int i=d;i<n;i++)
		{
			if(--mp[a[i-d]]==0) --p;
			if(++mp[a[i]]==1) ++p;
			if(p<l) l=p;	
		}
		cout<<min(l,p)<<endl;
	}
}

