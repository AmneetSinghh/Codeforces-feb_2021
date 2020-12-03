#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=1000005;
const int N = 2e5 + 5;
typedef long long ll;
ll n,k,a,b,mx,mn;
ll gcd(ll a,ll b){
  if (b==0)return a;
  return gcd(b,a%b);
}
ll Abs(ll x){return x<0?-x:x;}
void calc(ll a,ll b){
  for (;b<=n*k;b+=k){
    ll dis=Abs(a-b);
    if (dis==0)continue;
    ll st=n*k/gcd(n*k,dis);
    mx=max(mx,st);
    mn=min(mn,st);
  } 
}
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("big.txt","w",stdout);
#endif
    io;
   int t=1;
    while (t--)
    {
      
   cin>>n>>k>>a>>b;
  mx=1,mn=n*k;
  if (a==b)mn=1;
  calc(a+k,b+k);
  calc(k-a,b);
  calc(a,k-b);
  calc(k-a,k-b);
  cout<<mn<<' '<<mx<<endl;

    }  
 }