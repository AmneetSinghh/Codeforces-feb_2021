#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;cin>>t;while(t--){
		ll n;cin>>n;
	vector<ll> vc;
	for(ll i=2;i<=sqrt(n);i++)
	{
		while(n%i==0){
		vc.push_back(i);n/=i;}
	}
	if(n!=1)vc.push_back(n);
	ll a=1,b=1,c=1;
	for(int i=0;i<vc.size();i++)
	{
		if(a==1)
		a=a*vc[i];
		else if(b==1 || b==a)
		b=b*vc[i];
		else
		c=c*vc[i];// every time chages till n bro
	}
	if (a == 1 || b == 1 || c == 1 
        || a == b || b == c || a == c) { 
        cout << "NO" << endl; 
    } 
    else { 
    	cout<<"YES\n";
        cout << a << ' ' << b 
             << ' ' << c << endl; 
    } 
		
}}
