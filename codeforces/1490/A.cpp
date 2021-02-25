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
F(i,n)cin>>a[i];

int ans=0;
for(int i=1;i<=n-1;i++){
int mi=min(a[i],a[i+1]);
int mx=max(a[i],a[i+1]);
int tt=0;
if(mx%2==0)tt=mx/2;
else tt=mx/2+1;
while(mi<tt)
{
mi*=2;
++ans;

}
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