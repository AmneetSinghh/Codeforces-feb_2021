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
using namespace std;
#define tr cout<<"\n" 
#define br break
#define N 1000000 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 const ll mod=1000000007;
const ll mod1=998244353;
 
ll modpow(ll a, ll b, ll c)
{ //a^b%c in O(logb)
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % c;
        }
        a = (a * a) % c;
        b >>= 1;
    }
    return res;
}
ll modinv(ll m, ll n)
{ //modular inverse of n w.r.t m provided 1<=n<=(m-1) in O(logn) and m is prime
    return modpow(m, n - 2, n);
}
const ll nax = 3e5 + 5;
std::vector<ll>fact(nax, 1);// it has all the ones.
 
void fact1() {
    F(i,nax) fact[i] = fact[i - 1] * i % mod1;
}
ll ncr(ll n, ll r) {
    if(n < r) return 0;
    ll x = fact[n];
    x = x * modinv(fact[n - r], mod1) % mod1;
    x = x * modinv(fact[r], mod1) % mod1;
    return x;
}
 

void Waheguru()
{
    int n,k;
    cin>>n>>k;
    multiset<int> dec;
    vector<ipair> vc(n);
    f(i,n)cin>>vc[i].first>>vc[i].second;
    sort(vc.begin(),vc.end());
    int ans=0;
     
     
     //for(auto sd:vc)cout<<sd.first<<" "<<sd.second<<"\n";
     
     
    f(i,n)
    {
        while(!dec.empty()  && *dec.begin()<vc[i].first)dec.erase(dec.begin());
        int sz=dec.size();
        ans = (ans + ncr(sz, k - 1)) % mod1;
        dec.insert(vc[i].second);
    }
    cout<<ans;
    tr;

}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    fact1();
    int g=1;
    while (g--)Waheguru();
    return 0;
}