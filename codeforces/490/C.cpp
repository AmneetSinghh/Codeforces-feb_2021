#include<bits/stdc++.h>
using namespace std;
string s;
long long a,b,x,y,i,n,c[1ll<<20],d,p=1;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>s>>a>>b;n=s.length();
	for(i=n-1;i>=0;i--)
	{
		c[i]= ( (s[i]-'0') * p + c[i+1] )%b;
		p=( p * 10) % b;
	}
	for(i=0;i<n-1;i++)
	{
		d = (d*10+(s[i]-'0') )%a;
		if(d==0 && s[i+1]!='0' && c[i+1]==0)
		{
			cout<<"YES\n"<<s.substr(0,i+1)<<"\n"<<s.substr(i+1,n-1)<<"\n";
			return 0;
		}
		
	}
	cout<<"NO";
}
