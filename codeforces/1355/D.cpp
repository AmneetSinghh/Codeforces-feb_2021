#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define ll long long
#define se second
using namespace std;

int main()
{
	ll n,s;cin>>n>>s;
	if(s<n*2)
	cout<<"NO\n";
	else
	{
		cout<<"YES\n";

		ll val=s/n;
		ll rem=s%n;
			for(int i=1;i<=n;i++)
			{
				if(rem){
				cout<<val+1<<" ";--rem;}
				else cout<<val<<" ";
			}
			cout<<endl;
			cout<<"1\n";
		
	}
}
