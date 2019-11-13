// same thing for thiud code. rb o

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
ll x,y;
cin>>x>>y;
if(x==1&& y==1)
cout<<"YES\n";
else if(x==1 && y!=1)
cout<<"NO\n";
else if(x==2 && y==3)
cout<<"YES\n";
else if(x==2 && y>3)
cout<<"NO\n";
else if(x==3 && y>3)
cout<<"NO\n";
else
cout<<"YES\n";
	}
	
}

