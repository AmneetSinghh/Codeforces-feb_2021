#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n+1];
		int mx=-1;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		mx=max(a[i],mx);
			
		}
		int hash[mx+1]={0};
		
		for(int j=1;j<=mx;j++)
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]>=j)
				hash[j]++;
			}
		}
		
		// for(int i=1;i<=mx;i++)
		// cout<<hash[i]<<" ";
		// cout<<endl;
		
		for(int i=mx;i>=1;i--)
		{
			if(hash[i]>=i){
			cout<<i<<endl;
			break;}
		}
	}
	return 0;
}
