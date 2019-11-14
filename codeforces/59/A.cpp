#include<bits/stdc++.h>
using namespace std;

int main(){
	
string s;
cin>>s;
int n=s.length();
int up=0,lo=0;
for(int i=0;i<n;i++)
{
	if(isupper(s[i]))
	up++;
	else
	lo++;
}
if(up>lo)
{
	for(int i=0;i<n;i++)
	{
		if(isupper(s[i]))
		continue;
		else
		s[i]=s[i]-32;
	}
}
else if(lo>up)
{
	for(int i=0;i<n;i++)
	{
		if(isupper(s[i]))
			s[i]=s[i]+32;
		else
		continue;

	}
}
else
{
	for(int i=0;i<n;i++)
	{
		if(isupper(s[i]))
	s[i]=s[i]+32;
		else
		continue;

	}
}
cout<<s<<endl;

}






