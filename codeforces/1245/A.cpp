
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ins insert
#define sb substr
#define con continue
#define ub upper_bound
#define lb lower_bound
#define sp fixed<<setprecision
#define bp __builtin_popcount
#define pll pair<ll,ll>
#define pld pair<ld,ld>
using namespace std;


  
// driver code 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
    	ll a,b;
    	cin>>a>>b;
    	if ( __gcd(a, b) == 1) 
    	cout<<"Finite\n";
    	else
    	cout<<"Infinite\n";
    	
    }
} 
