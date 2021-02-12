/* not_stable but Believer */

#include<bits/stdc++.h>
#define int int
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
#define inf 10000005
using namespace std;
const int maxn=100005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;
 // dona vech differnet rakhn di koshs kro smae time ti\

void Not_Stable()
{
 int n;
 cin>>n;
 int a[maxn];
 for(int i=1;i<=n;i++)cin>>a[i];
 int next[maxn];
int index[maxn];
int res=0;
  rep(i,0,n)index[i]=n+1;
  pre(i,n,0)next[i]=index[a[i]],index[a[i]]=i;
int first=0,second=0;
  for(int i=1;i<=n;i++)
  {
    if(a[first]==a[i])res+=(a[second]!=a[i]),second=i;
    else if(a[second]==a[i])res+=(a[first]!=a[i]),first=i;
    else{
      // the closest next values, if first vch a vali closest a then first vch hi paaod;
      if(next[first]<next[second])first=i;
      else second=i;
      res++;
    }

  }


  cout<<res;
  tr;


}
 
 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}