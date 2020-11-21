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
      long double  n,m;
   cin>>n>> m;
      long double  a[maxn],b[maxn];
      F(i,n)cin>>a[i];
         F(i,n)cin>>b[i];
 
        long double l=0,r=1e10,val,mid,ans=-1,left;
         while((r-l)>something)
         {
             mid=(l+r)/2;
            val=m+mid;
            int flag=0;
            left=val/a[1]; val-=left;
            for(int i=2;i<=n;i++)
            {
                if(val<m){flag=1;break;}
                left=val/b[i];
                if(val<m){flag=1;break;}
                val-=left;
                left=val/a[i];
                if(val<m){flag=1;break;}
                val-=left;
                if(val<m){flag=1;break;}
            }
            left=val/b[1];
            val-=left;
            if(val<m)flag=1;
            if(!flag)ans=mid,r=mid;
            else l=mid;
            }
 
 
       cout<<setprecision(10);
    cout<<ans;tr;
 
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