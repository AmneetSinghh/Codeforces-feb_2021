#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
string sd="";
int n=s.length();
for(int i=0;i<n;i++)
{
	if(s[i]=='.')
	sd+="0";
	else if(s[i]=='-')
	{
		if(i+1<n && s[i+1]=='.'){
			sd+="1";
			++i;}
	    else if(i+1<n && s[i+1]=='-'){
	    sd+="2";
	    ++i;}
	    
		
	}
}
cout<<sd<<endl;




}
