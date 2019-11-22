#include <bits/stdc++.h>
#define ll long long
#define maxn 100100
using namespace std;
int main()
{
string s;
cin>>s;
int c=1;
int p=-1;
vector<int> vc;
for(int i=1;i<s.length();i++)
{
	
if(s[i]==s[i-1])
{
++c;
if(c>2)
{
vc.push_back(i);
--c;
	
}

if(c==p)
{
vc.push_back(i);
--c;
}

}
else
{
	p=c;
	c=1;
	
}


}


int n=s.length();int j=0;
// cout<<s<<endl;
if(vc.size()!=0)
{
	for(int i=0;i<n;i++)
{
	if(i==vc[j])
	{
	++j;
	s[i]='_';
		
	}
}
}

for(int i=0;i<n;i++){
if(s[i]!='_'){
cout<<s[i];}}


cout<<endl;












}
