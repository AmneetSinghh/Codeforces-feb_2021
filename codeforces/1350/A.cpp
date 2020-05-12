// ***********Code by Harry_Singh_____**************
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;cin>>t;while(t--)
	{
		ll n,k;cin>>n>>k;
		int f=0;
		ll value=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0){
			value=i;f=1;break;}
		}
		if(f==0)
			value=n*2+ (2*(k-1));// odds
		else
		value=(n+value)+(2*(k-1));
		cout<<value<<endl;
		
	}
}
