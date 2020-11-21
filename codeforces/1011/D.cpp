// I'll do; 
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
#define something 1e-6
using namespace std;
const int maxn=100005;
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
// ************************    MY ALL SNIPPTS    *****************************
/*
1. bfs
2. dfs
3. factorial
4. for loop
5. gcd
6. lcm
7. lowbit
8. multiseterase    for erasing the multiset
9. pairssort
10. power 
11. primefs   prime factors
12. sieve
13. check_prime
14. conected_components
15. modulo_inverse 
16. factorial_mod_m
17. n_choose_k
18. number_of_div  number of divisorw
19. n_choose_k_mod
20. number_of_div1
*****************************************************************************************
*/
 
void Not_Stable()
{
     int m,n,v;
     sc2(m,n);
     int cc[n+1]={0};/// corect means 1, inc means 0
     for(int i=0;i<n;i++)
     {
     printf("1\n");
     fflush(stdout);
      sc(v);
      if(v==0)return;
      if(v==1)cc[i]=1;
     }
     // now at least we have 30 operations left;
     int l=1,r=m,i=0,mid,flag;
     while(l<=r)// this is
     {
           mid = (l +r) / 2;
           int flag=cc[i];
           printf("%lld\n",mid),fflush(stdout);
           sc(v);
          if(v==0)return;
          if(v==1)
          {
            if(flag)l=mid+1;else r=mid-1;
          }
          else 
          {
            if(flag)r=mid-1;else l=mid+1;
          }
          ++i;i%=n;
 
     }
     return;
 
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