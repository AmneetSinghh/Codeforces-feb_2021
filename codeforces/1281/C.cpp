#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() 
{
 int t;cin>>t;while(t--){
 ll n;cin>>n;string s;cin>>s;
 ll count;
 count=s.size();
for(ll l=1;l<=n;l++)
{
	int first= s[l- 1] - '1';
		if (s.size() < n)
		{
		string second = s.substr(l);// last vala substring bro,, means start from this.
		for (int j = 1; j <= first; j++) s += second;
		}
		
	// The length Make this equal to s.size() bro
	count=(count+(count-l)*first+mod)%mod;// this may be negative bro that's why we add the mod value
}
cout<<count<<endl;;


}}
