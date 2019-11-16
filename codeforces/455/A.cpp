#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	        
ll n;	        
cin>>n;
ll hash[100005]={0};
ll mx=-1;
ll value;
for(ll i=0;i<n;i++){
cin>>value;
hash[value]++;
mx=max(value,mx);}

ll dp[100005][2];
dp[1][1]=hash[1]*1;
dp[1][0]=0;
for(int i=1;i<=mx;i++)
{
	dp[i][1]=(hash[i]*i)+dp[i-1][0];
	dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
}
cout<<max(dp[mx][0],dp[mx][1])<<endl;;









}


