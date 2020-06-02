//// Journey of Harry Singh from Diploma in Cse to Red Coder of India.///////////////////////////////////////////////////
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	// int t;cin>>t;while(t--){
	// 	ll n;
	// 	cin>>n;
	// 	ll a[n+1];
	// 	for(int i=1;i<=n;i++){
	// 	cin>>a[i];}
		
		/// a b c d
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a+b==c+d || a+c==d+b || a+d==b+c)
		cout<<"YES\n";
		else if(a+b+c==d || a+b+d==c || a+c+d==b || b+c+d==a || b+d+a==c || c+d+a==b)
		cout<<"YES\n";
		else cout<<"NO\n";
		


}
