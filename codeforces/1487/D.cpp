/* not_stable but Believer */
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

// for(int i=1;i<=400;i++)
//   for(int j=i+1;j<=400;j++)
//     for(int k=j+1;k<=400;k++){
//       vector<int> vc;
//       vc.pb(i), vc.pb(j), vc.pb(k);
//       sort(all(vc));
//       int ff=vc[0]*vc[0];
//       int ss=vc[1]*vc[1];
//       int tt=vc[2]*vc[2];
//       if(ff+ss==tt){
//         if(ff-j==k)cout<<i<<" "<<j<<" "<<k<<"\n";
//       }
//     }
// }
 
 
int n;
cin>>n;// 8,12,16,20
if(n<5)cout<<"0";
else{
  --n;
  int d=n/4;
  int l=1;
  int r=1000000000;
  int res=0;
  while(l<=r){
    int mid=(l+r)/2;
    int ans=(mid*(mid+1))/2;
    if(ans<=d)res=mid,l=mid+1;
    else r=mid-1;
  }

  cout<<res;



}
tr;




}




int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}