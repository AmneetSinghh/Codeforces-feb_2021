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

    	   F(i,n)
    	   {
    	   	cin>>a[i];
    	}

int dp[n]={0};
for(int i=n;i>=1;i--)
{
  if(i+a[i]>n)dp[i]=a[i];
  else if(i+a[i]<=n)
  {
  	dp[i]+=a[i]+dp[i+a[i]];
  }
}


int mx=0;

for(int i=1;i<=n;i++)mx=max(dp[i],mx);
	cout<<mx;
tr;




}
}