#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main()
{
int n;cin>>n;
string s;
cin>>s;
int z=0,o=0;
for(int i=0;i<n;i++)
if(s[i]=='1')o++;
else
z++;

//cout<<o<<"  "<<z<<endl;
if(z!=o){
	cout<<"1\n";
	cout<<s<<endl;
}

else
{
	
	// cut into two 
	string pre="";
	string cur="";
	for(int i=0;i<1;i++)
	{
	pre+=s[i];
	}
	for(int i=1;i<s.length();i++)
	{
cur+=s[i];
	}
	cout<<"2\n";
	cout<<pre<<" "<<cur<<endl;
	

}





}





