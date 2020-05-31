#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	int t;cin>>t;while(t--){
		string sd;cin>>sd;
		int mi=INT_MAX,f=0;
		for(int i=1;i<=sd.length();i++)
		{
			string f=string( i, '0');f.append(string(sd.length()-i,'1'));
			string s=string( i, '1');s.append(string(sd.length()-i,'0'));
				std::bitset<1000> b1(f);
			    std::bitset<1000> b(s);
			    std::bitset<1000> b3(sd);
				std::bitset<1000> b4(sd);
			    std::bitset<1000> df = (b3 ^= b1);
    			std::bitset<1000> dg= (b4 ^= b);
			int res=min(df.count(),dg.count());
			mi=min(res,mi);
		}
		cout<<mi<<"\n";
}}
