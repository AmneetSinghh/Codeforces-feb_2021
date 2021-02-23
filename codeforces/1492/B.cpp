/* not_stable but Believer */
/*Codeforces Round #701 (Div. 2) */
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
int a[n+1],hash[100005]={0};
std::vector<ipair> vc;
F(i,n)cin>>a[i],vc.push_back({a[i],i});
sort(all(vc));
reverse(all(vc));
int cur=n;
int l=n;
for(int i=0;i<vc.size();i++)
{
  if(i==0)
  {
    l=vc[i].second;
    for(int j=l;j<=n;j++)cout<<a[j]<<" ";
  }else{
    if(vc[i].second>l)continue;
    int r=l-1;
    l=vc[i].second;
    for(int j=l;j<=r;j++)cout<<a[j]<<" ";
  }
}


tr;




} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}