#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;cin>>t;while(t--){
		ll n,k;string s;cin>>n>>k>>s;
		ll pre[n+1]={0},dp[n+1]={0};
		pre[0]=s[0]-'0';
		for(int i=1;i<=n;i++)
		pre[i]=pre[i-1]+(s[i]-'0');
		// from the last string to the first string bro
		for(ll i=n-1;i>=0;i--)
		{
			ll ones=(s[i]-'0')^1;// if one then zero if zero then one;
			// for zero
			ll zeros=pre[n-1]-pre[i]+(s[i]-'0');
			if(i+k-1<n)ones+=(pre[i+k-1]-pre[i]);
			else ones+=(pre[n-1]-pre[i]);
			if(i+k<n)// previus
			ones+=dp[i+k];
			dp[i]=min(ones,zeros);
		}
		
		
		
		
		ll mi=10000000009;
		for(ll i=0;i<n;i++)
	    {
	    	ll check=dp[i];
	    	if(i)check+=pre[i-1];
	    	mi=min(check,mi);
	    }
		cout<<mi<<endl;
		
	}
	return 0;
}
