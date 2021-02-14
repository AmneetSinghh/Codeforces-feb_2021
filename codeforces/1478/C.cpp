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
  int N=n*2;
  int a[N+1];
  set<int> s;
    int flag=0;

  F(i,N)cin>>a[i],s.insert(a[i]);
  sort(a+1,a+1+N);
  for(int i=1;i<=N;i+=2){
    if(a[i]!=a[i+1])flag=1;
  }
  if(s.size()!=n || flag==1)cout<<"NO";
  else{
    reverse(a+1,a+1+N);// decending; baby
    int pre=0;
    for(int i=1,j=n;i<=N;i+=2,j--){
     int val=a[i];
     val-=pre;
     if(val>0 and val%(2*j)==0){
      val/=(2*j);
      pre+=(2*val);
     }else{
      flag=1;break;
     }
    }


    if(flag)cout<<"NO";
    else cout<<"YES";
  }



  tr;

}
 
 





int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}