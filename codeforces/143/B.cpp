#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
// int t;cin>>t;while(t--)
// {
string s;cin>>s;
int f=0;
if(s[0]=='-'){
s.erase(0, 1); 
f=1;
cout<<"(";}

cout<<"$";
string res="";
int idx=-1;
for(int i=0;i<s.length();i++)
{
	if(s[i]=='.'){
	idx=i;break;}
	res+=s[i];
}
if(res.length()<=3)
cout<<res;
else
{
string r="";
int count=0;
for(int i=res.length()-1;i>=0;i--)
{
   r+=res[i];
   ++count;
   if(count==3)
   {
   	if(i-1>=0)
   	r+=",";
   	count=0;
   }
}
reverse(r.begin(),r.end());
cout<<r;

}

cout<<".";
if(idx==-1)
cout<<"00";
else
{
	string f="";
	for(int i=idx+1;i<s.length();i++)
		f+=s[i];
	
	
	if(f.length()<2)
	cout<<f[0]<<"0";
	else if(f.length()>=2)
	cout<<f[0]<<f[1];
	
}

if(f==1)
cout<<")";
cout<<"\n";






}
