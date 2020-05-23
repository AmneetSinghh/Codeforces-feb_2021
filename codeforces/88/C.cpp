#include<bits/stdc++.h>
# define rep (i , n ) for ( int ( i )=0;( i ) <( n );( i )++)

using namespace std;
typedef long  long  ll;
ll mod=1000000007;
const int maxn=100005;
ll power(ll x, ll  y)  {  ll res = 1;x = x % mod;y=y%mod;while (y > 0){if (y & 1)  res = ((res%mod)*(x%mod)) % mod;  y = y>>1;x = ((x%mod)*(x%mod)) % mod;  }  return res%mod;}  
ll C(int n,int k){ll f=1;for(int i=0;i<k;i++)f*=n-i,f/=i+1;return f;}
ll gcd(ll a, ll b){ if (a == 0) return b;  return gcd(b % a, a);  } 
ll lcm(ll a, ll b)  {  return (a*b)/gcd(a, b);  }  
 
int main ()
{

ll a,b;cin>>a>>b;
ll take=lcm(a,b);
ll fir=take/a;
ll sec=take/b;
if(abs(fir-sec)<=1)
cout<<"Equal\n";
else if(fir>sec && fir-sec>1)
cout<<"Dasha\n";
else 
cout<<"Masha\n";

}
