// Time for the Linked-List
 
 
 
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
 
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009
 
using namespace std;
const int maxn=200005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;
const int N=200005;
int a[N];
int dp[maxn];
int ts[maxn];
const int m=998244353;
int mul(int x, int y)
{
    return (x * 1ll * y) % mod;
}
int power(int x, int y)
{
    int z = 1;
    while(y > 0)
    {
        if(y % 2 == 1)
            z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}

int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int  modInverse(int a, int m) 
{ 
return power(a, m - 2); 
} 
void fib()
{
    dp[0]=0,dp[1]=1;
    ts[0]=1,ts[1]=2;
    for(int i=2;i<=maxn;i++)
    {
        dp[i]=((dp[i-1]%mod)+(dp[i-2]%mod))%mod;
        ts[i]=((ts[i-1]%mod)*2)%mod;
    }
}
void Not_Stable()
{
int n;cin>>n;
fib();
int inv=modInverse(ts[n],m);
int ans=((dp[n]%mod)*inv)%mod;

cout<<ans;
tr;

}
   


 
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}