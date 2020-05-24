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



void harry()
{
	int n;
	cin>>n;
	vector<string> vc;
	for(int i=1;i<=n;i++){
	string s;cin>>s;
	vc.push_back(s);}
	
	
	int f=0;
	
	for(int i=0;i<vc.size();i++)
	{
		string res=vc[i];
		int nn=res.length()-1;
		for(int j=0;j<res.length();j++)
		{
			
			
			if(i==vc.size()-1)
			{
				continue;
			}
			if(res[j]=='1')
			{
			 	if(j==nn)continue;
			 	
			 	if(res[j+1]=='1')continue;
			 	
			 	if(i+1<vc.size())
			 	{
			 		if(vc[i+1][j]=='1')continue;
			 	}
			 	
			 	f=1;break;
			}
		}
		if(f==1)break;
	
	}
	
	
	if(f==1)
	cout<<"NO\n";
	else cout<<"YES\n";
	
	
}








int main()
{
int t;
cin>>t;
while(t--) {harry();}
return 0;
}
