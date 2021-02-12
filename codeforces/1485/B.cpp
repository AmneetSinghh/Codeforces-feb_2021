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
  int n,q,k;
  cin>>n>>q>>k;
  int a[n+12];
  F(i,n)cin>>a[i];
  a[0]=0,a[n+1]=0;
  int dp[n+1]={0};
  F(i,n){
    int val=a[i];
    int pre=a[i-1];
    int next=a[i+1];
    if(k<=pre)continue;
    if(pre>=1){
      if(k<=next)next=k;
      dp[i]+=((next-pre)-2);// kend   p
    }else{

      if(i==n){
        dp[i]+=((k-pre)-1);
      }
      else{
      if(k>=next)dp[i]+=(next-2);
      else dp[i]+=(k-1);// pehla;
      }
      
    }

    if(dp[i]<=0)dp[i]=0;
    
  }



  // for(int i=1;i<=n;i++)cout<<dp[i]<<" ";
  //   tr;

  F(i,n)dp[i]+=dp[i-1];




  while(q--){
    int l,r;cin>>l>>r;

    if(r-l+1<=1)cout<<k-1;
    else{
      int lo=a[l];
      int next=a[l+1];
      int ro=a[r];
      int pre=a[r-1];
      int first=0,second=0;
      if(k>=next)first+=(next-2);
      else first+=(k-1);

      if(k>pre)second+=((k-pre)-1);

      // cout<<first<<" "<<second<<" -> ";tr;

      first+=(dp[r-1]-dp[l]);
      cout<<first+second;

    }


    tr;

  }
}
 
 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}