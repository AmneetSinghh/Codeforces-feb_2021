#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll n,s0,s1;
	cin>>n>>s0>>s1;
	ll x,y;
	ll a,b,c,d;
	a=b=c=d=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		if(x<s0)++a;
		if(y<s1)++b;
		if(x>s0)++c;
		if(y>s1)++d;
	}
//chekc max of all babies;
  if(a>=b && a>=c && a>=d)
  cout<<a<<"\n"<<s0-1<<" "<<s1<<endl;
  else if(b>=a && b>=c && b>=d)
  cout<<b<<"\n"<<s0<<" "<<s1-1<<endl;
  
  else if(c>=a && c>=b && c>=d)
  cout<<c<<"\n"<<s0+1<<" "<<s1<<endl;
  
  else if(d>=b && d>=c && d>=a)
  cout<<d<<"\n"<<s0<<" "<<s1+1<<endl;
  
	return 0;
}
