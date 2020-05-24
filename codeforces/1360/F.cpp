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

bool ch_s(string a,string b)
{
	int res=0;
	for(int i=0;i<a.length();i++)
	if(a[i]!=b[i])res++;
	
	if(res>1)return false;else return true;
}
bool check(string temp,vector<string>&a)
{
	for(int i=0;i<a.size();i++)
	{
		if(!ch_s(temp,a[i]))return false;
	}
	return true;
}
int main()
{
	int t;cin>>t;while(t--)
	{
		int n,m;cin>>n>>m;
		vector<string> a;
		for(int i=0;i<n;i++){string s;cin>>s;a.push_back(s);}
		string good="-1";
		for(int i=0;i<a.size();i++)
		{
			for(int pos=0;pos<a[i].length();pos++)
			{
				for(char ch='a';ch<='z';ch++)
				{
					string temp=a[i];
					temp[pos]=ch;// now check this tring is good or not'
					if(check(temp,a))
					good=temp;
				}
			}
		}
		cout<<good<<endl;
		
		
		
	}
}
