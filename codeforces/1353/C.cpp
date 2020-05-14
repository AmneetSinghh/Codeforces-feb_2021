#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll a[500006]={0};
	a[1]=0;
	for(ll i=3,j=1;i<=500001;i+=2,j++)
		a[i]=a[i-2]+ ((((i*2)+((i-2)*2)))*j);
	


	int t;cin>>t;while(t--){
		ll n;cin>>n;
		cout<<a[n]<<endl;
		
	}
}
