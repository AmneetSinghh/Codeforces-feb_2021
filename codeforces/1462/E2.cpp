#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
int string_is_the_power_But=0,AAA_AAA=0,sexa=0;






const int maxn=1000006;
int mod_expo(int x, int p) {
    int res = 1;
    x = ((x % mod) + mod) % mod;
    while (p > 0) {
        if (p & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        p /= 2;
    }
    return res;
}

// Function to calculate y such that (x * y) % MOD = 1
// Requirements: mod is prime
// Limits: x -> [INT64_MIN, INT64_MAX]

int mod_inv(int x) {
    return mod_expo(x, mod - 2);
}

vector<int> fact, inv_fact;
void precalculate_factorials() {
    fact.resize(maxn + 1);
    inv_fact.resize(maxn + 1);
    fact[0] = 1;
    for (int i = 1; i <= maxn; i++)
        fact[i] = (fact[i - 1] * i) % mod;
    inv_fact[maxn] = mod_inv(fact[maxn]);
    for (int i = maxn - 1; i >= 0; i--)
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % mod;
}

// Function to calculate nPr in O(1)
// Requirements: precalculate_factorials() must have been run
// Limits: n -> [0, MAX_N], r -> [0, INT64_MAX]

int npr_mod(int n, int r) {
    return (n < r) ? 0 : (fact[n] * inv_fact[n - r]) % mod;
}

// Function to calculate nCr in O(1)
// Requirements: precalculate_factorials() must have been run
// Limits: n -> [0, MAX_N], r -> [0, INT64_MAX]

int ncr_mod(int n, int r) {
    return (n < r) ? 0 : (npr_mod(n, r) * inv_fact[r]) % mod;
}
int32_t main() {
precalculate_factorials();
io;
  int g;cin>>g;
    while (g--){

      int n,m,k;cin>>n>>m>>k;
      int a[n+1];
      std::vector<int> vc;
         for(int i=0;i<n;i++)cin>>a[i],vc.pb(a[i]);
          sort(all(vc));
          int c=0;
          int move=0;
          int i=0;
          while(i<n)
          {
             int val=vc[i];
              val+=k;
              while(move<n && vc[move]-vc[i]<=k)++move;
              c=((c%mod)+(ncr_mod(move-i-1,m-1)%mod))%mod;
              ++i;

          }




          cout<<c;
          tr;


}
}