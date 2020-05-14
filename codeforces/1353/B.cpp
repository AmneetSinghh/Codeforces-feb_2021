#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;cin>>t;while(t--){
		ll n,k;cin>>n>>k;
		ll a[n+1],b[n+1];
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		ll sum=0;
		sort(a+1,a+1+n);
		sort(b+1,b+1+n,greater<ll>());
		int j=1;
		for(int i=1;i<=k;i++)
		{
			if(a[i]<b[i])swap(a[i],b[i]);
			else break;
		}
		for(int i=1;i<=n;i++)sum+=a[i];
		cout<<sum<<endl;
		
	}
}
