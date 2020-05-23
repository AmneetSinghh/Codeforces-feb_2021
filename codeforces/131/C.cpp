#include<bits/stdc++.h>
# define rep (i , n ) for ( int ( i )=0;( i ) <( n );( i )++)

using namespace std;
typedef  unsigned  long  long  ll;
ll mod=1000000007;
const int maxn=100005;

ll power(ll x, ll  y)  {  ll res = 1;x = x % mod;y=y%mod;while (y > 0){if (y & 1)  res = ((res%mod)*(x%mod)) % mod;  y = y>>1;x = ((x%mod)*(x%mod)) % mod;  }  return res%mod;}  
// ll l[3000][3000],r[3000][3000],u[3000][3000],d[3000][3000],A[3000][3000];
ll C(int n,int k){
	ll f=1;
	for(int i=0;i<k;i++)f*=n-i,f/=i+1;
	return f;
}

int main ()
{
	ll a,total,b;
	cin>>a>>b>>total;
	ll ans=0;
	for(int i=4;i<=a&&i<total;i++){
		ans+=C(a,i)*C(b,total-i);
	}
	cout<<ans<<endl;
	
	
	
	
	
	
	
	
	
	
}
