

#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009

using namespace std;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;
const int maxn=200;
int a[maxn][maxn];
int pre[maxn][maxn];



void Not_Stable()
{
int n,m;
cin>>n>>m;
F(i,n)F(j,m)cin>>a[i][j];


F(i,n)
{
  F(j,m)
  {
    if((i+j)%2==a[i][j]%2);else a[i][j]++;
  }
}
F(i,n)
{
  F(j,m)cout<<a[i][j]<<" ";
  tr;
}


  
}

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}