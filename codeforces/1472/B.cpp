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
    	int n;
    	cin>>n;
    	int a[n+1];
    	int sum=0;
    	int aa=0,bb=0;
    	   F(i,n)
    	   {
    	   	cin>>a[i];
    	   	if(a[i]%2==0)aa++;
    	   	else ++bb;
    	   }


    	   if(aa%2==0)
    	   {
    	   	  if(bb%2==0)cout<<"YES";
    	   	  else cout<<"NO";
    	   }
    	   else
    	   {
    	   	 // cut two ones;
    	   	if(bb-2 >=0 && (bb-2)%2==0)cout<<"YES";
    	   	else cout<<"NO";
    	   }


    	   tr;







}
}