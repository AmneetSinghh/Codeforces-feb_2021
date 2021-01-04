/* Coding is love */

#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 100000000000009;
using namespace std;




int32_t main() 
{
    io;
  int g;cin>>g;
    while (g--){
    	int a,b,n;
    	cin>>a>>b>>n;

    	int count=0;
    	int aa=1,bb=1;
    	while(a%2==0)
    	{
    		a/=2;
    	   aa*=2;
    	}
    	while(b%2==0)
    	{
    		b/=2;
    		bb*=2;
    	}

if(aa*bb>=n)cout<<"YES";
else cout<<"NO";


tr;





}
}