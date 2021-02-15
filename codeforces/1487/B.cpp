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
int n,k;
cin>>n>>k;
if(n%2==0){
  int r=k%n;
  if(r==0)r=n;
  cout<<r;
}
else
{
  int d=n/2;
  if(k<=d)cout<<k;
  else{
    ++d;
    k-=d;// now 3 cut from all baby
    int start=((n/2)+2)%n;
    if(start==0)start=n;
    else{}
    if(k==0)cout<<start;
    else{
    --d;
    int rem=k%d;
    int how=k/d;// how many points;
    int ans=(start+ (((how*(d+1))%n)+rem)%n)%n;
    if(ans==0)ans=n;
    cout<<ans;

    }

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