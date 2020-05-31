#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	int t;cin>>t;while(t--){
		int n,k;cin>>n>>k;
		int def=0;
		for(int i=1;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			if(a==k || b==k)
			def++;
		}
		if(def<=1)
		cout<<"Ayush\n";
		else
		{
			if((n-3)%2==0)
			cout<<"Ashish\n";
			else cout<<"Ayush\n";
		}
		
		
		
}}
