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
{int n,k;
  cin>>n>>k;
  int d=k;
  int ans=k;
  int lo=0;
  int ro=1000000009;
  while(lo<=ro){
    int mid=(lo+ro)/2;
    if(d+(mid*k)>=n)ans=d+(mid*k),ro=mid-1;
    else lo=mid+1;
  }
  k=ans;
  int rem=(k/n)+( (k%n==0)?0:1);

  cout<<rem;
  tr;


}
 
 





int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}