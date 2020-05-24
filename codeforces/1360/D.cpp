//*******************************By Harry Singh From Phillaur.
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000006
#define MOD 1000000009
using namespace std;
#define INF 1e15
set<ll> primes;
vector<pair<ll,ll>> adj[MAX];
vector<ll> ad[MAX];
///******************************ALL important functions;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);} 
ll lcm(ll a, ll b)  {  return (a*b)/gcd(a, b);  } 
ll power(ll x,ll y){ ll res = 1;x = x % MOD; if (x == 0) return 0;while (y > 0){if (y & 1)  res = ((res%MOD)*(x%MOD)) % MOD;  y = y>>1; x = ((x%MOD)*(x%MOD)) % MOD;  }  return res;  }  
void Sieve(){ bool prime[MAX+1]; memset(prime, true, sizeof(prime)); for (int p=2; p*p<=MAX; p++) { if (prime[p] == true) {for (int i=p*p; i<=MAX; i += p) prime[i] = false; } } for(int i=2;i<=MAX;i++)if(prime[i]==true)primes.insert(i);} 



ll countDivisors(ll n, ll k) 
{ 
    // integer to count the divisors 
    ll count = 0, i; 
  ll flag=1;
    for (ll i = 1; i <=sqrt(n); i++) 
    { 
        if(i>k)
        break;
        if (n % i == 0) 
        {
        flag=max(i,flag);
        if(k<n/i)continue;
        else  
        flag=max(n/i,flag);
        	           
        }
    } 
    
    return flag;
} 


void harry()
{
	ll n,k;
	cin>>n>>k;
	if(k>=n)
	cout<<"1\n";
	else if(k==1)
	cout<<n<<"\n";
	else
	{
				ll f=countDivisors(n,k);
				if(f==1)
				cout<<n<<endl;
				else
				cout<<n/f<<endl;
				

	}
	
}









int main()
{
int t;
cin>>t;
while(t--) {harry();}
return 0;
}
