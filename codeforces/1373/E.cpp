#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
typedef long long ll;
int f[]={0,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
ll Min;
ll wjm (int u,int n,int k) {
  ll ans=0,p=10,sum=0;
  for (int i=u;i<=u+k;i++) sum+=f[i];
  n-=sum;
  if (n<0||n%(k+1)) return 1e18;
  n/=(k+1);
  if (u+k>=10) n++;// this is required 

  while (n) {
    int tt=min(9,n);
    ans+=tt*p;
    p*=10;
    n-=tt;
  } 
  ans=ans+f[u+k];
  if (u+k>=10) ans--;
  if (ans>=k) 
  return ans-k;
  else return 1e18;
}
int main () {
  int t;
  cin>>t;
  while (t--) {
    int n,k;
    cin>>n>>k;
    Min=1e18;
    for (int i=0;i<=9;i++) Min=min(Min,wjm(i,n,k));// i is just the starting index from where we start baby        we can say the last value or digit in your number baby
    if (Min==1e18) printf("-1\n");
    else printf("%lld\n",Min);
  }
}