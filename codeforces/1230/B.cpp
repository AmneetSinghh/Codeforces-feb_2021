//// Journey of Harry Singh from Diploma in Cse to Red Coder of India.///////////////////////////////////////////////////
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	
			// cout<<k<<" "<<s<<"\n";

	if(s.length()==1 &&k>=1)
	cout<<"0\n";
	else if(s.length()==1 && k<=0)
	cout<<s<<"\n";
	else
	{
		for(int i=0;i<s.length();i++)
		{
		   if(k<=0)break;
		   if(i==0 && s[i]!='1'){
		   s[i]='1';--k;}
		   else if(i>0 && s[i]!='0'){
		   s[i]='0';--k;}
		}
		
		cout<<s<<"\n";
		}
	


}
