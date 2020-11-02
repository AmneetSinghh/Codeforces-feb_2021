/*
|********************************************** Not_Stable *********************************************************|                                                                |
|   **     *   *******  *********                                                                                   |
|   * *    *  *      *      *                                                                                       |
|   *  *   *  *      *      *                                                                                       |
|   *   *  *  *      *      *                                                                                       |
|   *    * *  *      *      *                                                                                       |
|   *     **   ******       *                                                                                       |
|                            ******    **********   ******    ******  *         *******                             |
|                            *             *       *      *  *    *   *         *                                   |
|                             ******       *       *      *  *  **    *         *******                             |
|                                  *       *       * **** *  *    *   *         *                                   |
|                                 *        *       *      *  *     *  *         *                                   |
|                            *****         *       *      *   ******   *******  *******                             |
|Keep it Simple!                                                                                                    |
|********************************************** Not_Stable ********************************************************* 
*/
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353 
#define inf 1000000000000009
using namespace std;
long long lowbit(long long x){return x&-x;}//that means if we have 10100 it will return 2^2=4;





const int maxn=300005;
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
int npr_mod(int n, int r) {
    return (n < r) ? 0 : (fact[n] * inv_fact[n - r]) % mod;
}

int ncr_mod(int n, int r) {
    return (n < r) ? 0 : (npr_mod(n, r) * inv_fact[r]) % mod;
}
void Not_Stable()
{
	precalculate_factorials();
	int n;
	cin>>n;
	int N=n*2;
	int a[N+1];
	   F(i,N)cin>>a[i];
	   sort(a+1,a+N+1);
	   int first=0,second=0;
	   for(int i=1;i<=n;i++)first+=a[i],first%=mod;
	   	 for(int i=n+1;i<=2*n;i++)second+=a[i],second%=mod;
	   	 int ans=((second-first)+mod)%mod;

	   	int res=(((((ncr_mod(2*n-1,n-1))%mod)*2)%mod)*ans)%mod;
	   	cout<<res;
	   	tr;

}


 
 
int32_t main()
{     
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("op.txt","w",stdout);
#endif
 io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}