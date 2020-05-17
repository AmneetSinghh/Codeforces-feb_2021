// Harry Singh**************************************************************************************************************

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 using namespace std;
#define endl '\n'
#define ll long long 
#define maxn 100010
const int MOD = 1000000007;
bool prime[20000000+3]; 

void harry_singh(){

   
  ll a,b,k;cin>>a>>b>>k;
  if(k==0)
  cout<<"0\n";
  else if(k%2==0)
  {
  	ll cur=(k/2);
  	ll val=(a*cur)-(b*cur);
  	cout<<val<<endl;
  }
  else
  {
  	ll cur=(k/2)+1;
  	if(k/2==0)
  	cout<<a*cur<<endl;
  	else
  	cout<<((a*cur)-(b*(k-cur)))<<endl;
   }
  
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin>>t;
    while (t--)
   harry_singh();
    return 0;
}
