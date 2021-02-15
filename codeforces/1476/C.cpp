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

int n;cin>>n;
int c[n+1],a[n+1],b[n+1];
F(i,n)cin>>c[i];
F(i,n)cin>>a[i];
F(i,n)cin>>b[i];

int ans=0;
int best_len=abs(a[2]-b[2]);// one for this;
for(int i=2;i<=n;i++)
{
  int val=1+best_len+c[i];
  int next=abs(a[i+1]-b[i+1]);
  ans=max(ans,val);
  if(i<n and a[i+1]!=b[i+1])best_len=max(val-next,next);
  else   best_len=0;
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