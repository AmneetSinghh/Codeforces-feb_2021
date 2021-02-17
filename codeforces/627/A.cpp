/* It's Practice time */
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
#define mod 1000000000000000000
#define inf 1000000000009
using namespace std;

/*
Imp Observations: s=a+b=(a^b)+(a&b)*2;
(a&b)=((a+b)-(a^b))/2
*/

void Not_Stable()
{
  int a,b;
  cin>>a>>b;
  int diff=a-b;
  if(diff<0 || diff%2==1){
    cout<<"0";tr;
    return;
  }
  diff/=2;
  int ans=1;
  for(int i=0;i<=40;i++){
    if(b&(1ll<<i))ans*=2;
    if(diff&(1ll<<i)){
      if(b&(1ll<<i)){
        cout<<"0";tr;;return;
      }
    }

  }
  if(a==b)ans-=2;// for the case whhen a =b that means, one can be zerol
  cout<<ans;
  tr;
}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}