#include<bits/stdc++.h>
using namespace std;

int main(){

int n,t;
cin>>n>>t;
string s;
cin>>s;
string ss;
for(int i=1;i<=t;i++)
{
		 ss=s;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]=='G' && s[i-1]=='B')
		swap(ss[i],ss[i-1]);
		
	}
	s=ss;
	
}
cout<<ss<<endl;



}
