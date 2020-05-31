#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	ll n,k,o=0,e=0,a;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a%2==0)e++;else o++;
	}
	
	int f=0;
	for(int i=1;i<=o;i+=2)
	{
		if(k<i)break;
	      ll temp=k-i;
	      if(e>=temp){
	      f=1;break;}
	}
	if(f==0)
	cout<<"No\n";
	else 
	cout<<"Yes\n";

}}
