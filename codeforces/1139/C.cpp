/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
#define N 100005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 
//* ************************************************* Think Simple **********************************************************//
//************************************************HINTS******************************************************//
/* 
1. If we have to make Xor of 3 elements -> X, 3 elements will be Unique, ans->    (z^x^y)^y^z;  this will give us X
2. 
*/
 
 int power(int x,int y)  
{  
    int res = 1;     // Initialize result  
  
    x = x % mod; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % mod;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % mod;  
    }  
    return res;  
}  
 
 vector<int> G[100005];
 int total=0;
int vis[100005]={0};
int var=0;
 void dfs(int s)
 {
  vis[s]=1;
  ++var;
    for(auto c:G[s])
      if(!vis[c])dfs(c);
 }
 
 
void Waheguru()
{
  int n,k;
  cin>>n>>k;
  F(i,n-1)
  {
            int u,v,w;
            cin>>u>>v>>w;
            if(w==0)G[u].pb(v),G[v].pb(u);
  }
total=power(n,k);
for(int i=1;i<=n;i++)
{
  if(!vis[i])
  {
    var=0;
    dfs(i);
    total=(((total-power(var,k))%mod)+mod)%mod;
 
  }
}
cout<<total;
tr;
 
}
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}