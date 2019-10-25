
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef pair<ll,ll> pairss;
typedef pair<ll,pairss> pairs;
typedef pair<pairss,pairss> pairsss;
#define mod 1000000000
#define mp make_pair
#define ff first
#define ss second
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int hash[27]={0};
		string res="";
		int flag;
		for(int i=s.length()-1;i>=0;i--)
		{
			int d=s[i]-97;
			hash[d]++;
			if(hash[d]%2!=0  && s[i-1]-97!=d)
			res+=s[i];
		}
		set<char> sm;
		for(int i=0;i<res.length();i++)
		sm.insert(res[i]);
		
		
		for(auto sd: sm)
		cout<<sd;
		
		cout<<endl;
	}
}
