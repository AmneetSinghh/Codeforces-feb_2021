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

ll dp[300012][2];
ll find(vector<ll>v)
{
    ll n=v.size();
    F(i,n)
    {
        dp[i][0]=0;
        dp[i][1]=0;
    }
    for(ll i=1;i<=n;i++)
    {
        ll x=v[i-1];
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]+x);
        dp[i][1]=max(dp[i-1][1],dp[i-1][0]-x);
    }
    return dp[n][0];
}
vector<ll>v;
ll find(ll l,ll r)
{
    vector<ll>vx;
    for(ll j=l-1;j<=r+1;j++)
    {
        vx.pb(v[j]);
    }   
    return find(vx);
}
void Waheguru()
{
    v.clear();
    ll n,q;
    cin>>n>>q;
    v.pb(0);
    F(i,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    v.pb(0);
 
    ll ans=find(v);
    cout<<ans<<endl;
   F(i,q)
    {
        ll x,y;
        cin>>x>>y;
            ans-=find(x,x);
            ans-=find(y,y);
            swap(v[x],v[y]);
            ans+=find(x,x);
            ans+=find(y,y);
        cout<<ans<<endl;
    }
 
 
 
 
 
 
}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Waheguru();
    return 0;
}