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
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;

void Not_Stable()
{
int n,k;
cin>>n>>k;
int N=n*k;
int a[N+1];
F(i,N)cin>>a[i];
sort(a+1,a+N+1);
int ans=0;
int j=N;
int val=n/2+1;
int last=N;
for(int i=1;i<=k;i++)ans+=(a[last-val+1]),last=last-val;
cout<<ans;tr;
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