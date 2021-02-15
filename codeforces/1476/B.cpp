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


  int n,k;
  cin>>n>>k;
  int a[n+1];
  F(i,n)cin>>a[i];
  int l=0,r=1e16,ans=1e16,mid;
  while(l<=r){
    mid=(l+r)/2;
    int check=a[1]+mid;
    bool possible=true;
    for(int i=2;i<=n;i++){
      if(a[i]*100>k*check){possible=false;break;}
      check+=a[i];
    }
    if(possible)ans=min(ans,mid),r=mid-1;
    else l=mid+1;
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