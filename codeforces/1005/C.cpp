// by harry singh
/* ********************************NOTES*****************************
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
		ll n;cin>>n;
		ll a[n+1];
		multiset<ll> s;
		for(int i=1;i<=n;i++){cin>>a[i];s.insert(a[i]);}
		ll p[34];
		for(int i=1;i<=31;i++)
		p[i]=pow(2,i);

		
		for(int i=1;i<=n;i++)
		{
			int f=0;
			
             if(s.find(a[i])!=s.end())
              s.erase(s.equal_range(a[i]).first);
              
			for(int j=1;j<=31;j++){
			if(s.find(p[j]-a[i])!=s.end()){
			f=1;break;}
			}
            s.insert(a[i]);
			if(f==0)
			s.erase(a[i]);
		}
		
		cout<<n-s.size()<<endl;
		
		
}
