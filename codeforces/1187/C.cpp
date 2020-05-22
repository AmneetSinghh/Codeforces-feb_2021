# include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll ans,n,t;
ll l[1009];
ll r[1009];
ll a[1009];
ll b[1009];
ll c[1009];
ll start=1000007;
int main()
{
	cin>>n>>t;
	
	for(ll i=0;i<t;i++)
	{
		cin>>a[i]>>l[i]>>r[i];
		if(a[i])
		b[l[i]]++,b[r[i]]--;
	}
	// prefix sum baby
	for(ll i=1;i<=n;i++)
		b[i]+=b[i-1];
		
	for(int i=1;i<=n;i++)
	{
		c[i]=start;
		if(!b[i])start--;
	}
	
	for(int i=0;i<t;i++)
		if(!a[i] && c[l[i]]==c[r[i]]){cout<<"NO";return 0;}
	cout<<"YES\n";
	for(int i=1;i<=n;i++)
	cout<<c[i]<<" ";
}
