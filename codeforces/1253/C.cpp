#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int main()
{
	ll n,m;cin>>n>>m;
	ll a[n+1];
	ll pre[n+1];
	ll ans[n+1];
	pre[0]=0;
	for(ll i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+1+n);
	for(ll i=1;i<=n;i++)
	pre[i]=a[i]+pre[i-1];
	ans[0]=0;
	for(ll i=1;i<=n;i++)
	{
		 ans[i]=pre[i];
		if(i>=m)
		{
			ans[i]+=(ans[i-m]);
		}
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	
}

