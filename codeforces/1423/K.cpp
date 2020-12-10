#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod  998244353
#define inf 1000000000000
using namespace std;

const int maxn=1000006;
bool prime[maxn+1];
int dp[1000006]={0};
void sieve()

{

    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=maxn; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=maxn; i += p)
                prime[i] = false;
        }
    }

dp[1]=1;
int val=0;
    for(int i=2;i<=maxn;i++)
    {
          int cost=0;
          if(dp[i]==1)--cost;
          if(prime[i])
          {
            ++cost;
            if(i*i<=maxn)dp[i*i]++;
          }

          dp[i]=(dp[i-1]+cost);
    }
}

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outputt.txt","w",stdout);
#endif
    // io;
    sieve();
   int t;
   scanf("%lld",&t);
    while (t--)
{
int n;
scanf("%lld",&n);
printf("%lld\n",dp[n]);

    }  
 }