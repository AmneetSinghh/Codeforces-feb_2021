/* not_stable but Believer */
// div 3 round; code by not_stable;
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000009
using namespace std;
const int maxn=100005;
 

void Not_Stable()
{
int n;cin>>n;
int a[n+1];
int h[12]={0};
F(i,n)cin>>a[i],h[a[i]%3]++;
int ans=0;

int make=n/3;

for(int i=0;i<=6;i++)
{
  int k=i%3;
  if(h[k]>make)h[(k+1)%3]+=(h[k]-make),ans+=(h[k]-make),h[k]=make;
}



cout<<ans;
tr;
} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}