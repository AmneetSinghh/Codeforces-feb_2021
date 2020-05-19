#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){ if (a == 0) return b;  return gcd(b % a, a);} 
ll lcm(ll a, ll b)  {return (a*b)/gcd(a, b);}  


bool compare(string a, string b) 
{ 
    return (a+b < b+a); 
} 


int main()
{
	int n;cin>>n;
	string s;
	vector<string> vc;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		vc.push_back(s);
	}
	

std::sort( vc.begin(), vc.end(),compare );
string res="";
for(int i=0;i<vc.size();i++)
res+=vc[i];
cout<<res<<endl;
	
}
