#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t=9;
int main(){
ll n;cin>>n;
ll mx=((n+1)*t)-n;
ll mi=min(((n+1)*t)-n,(2ll*(n+2)*3ll)-n);
vector<ll> divs;
for(ll i=2;i<=sqrt(n);i++)
{
	if(n%i==0)
	divs.push_back(i);
}
if(divs.size()==0)
cout<<mi<<" "<<mx<<"\n";
else
{
	// 100->   2 4 5 10
	for(int i=0;i<divs.size();i++)
	{
		ll m=n/divs[i];
		for(int j=1;j<=sqrt(m);j++)// 50 sqrtbro
		{
			//3 chances of each min-> 
			if(m%j==0)
			{
				ll first=divs[i],second=j,third=m/j;
				mi=min(((first+1)*(second+2)*(third+2))-n,mi);
				mi=min(((second+1)*(first+2)*(third+2))-n,mi);
				mi=min(((third+1)*(second+2)*(first+2))-n,mi);
			}
			
		}
	}
	cout<<mi<<" "<<mx<<"\n";
}


}
