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


int n;
cin>>n;
int a[n+1];
std::vector<ipair> vc;
F(i,n)cin>>a[i],vc.pb({a[i],i});
sort(all(vc));
int pre[n+12]={0};
for(int i=0;i<vc.size();i++)
{
 pre[i+1]=pre[i]+vc[i].first;
}
std::vector<int> ans;

for(int i=n;i>=1;i--)
{
  int next=pre[i+1]-pre[i];
  if(pre[i]>=next)ans.pb(vc[i-1].second);
  	else break;
}
cout<<ans.size();tr;
sort(all(ans));
for(auto sd:ans)cout<<sd<<" ";
tr;
} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}