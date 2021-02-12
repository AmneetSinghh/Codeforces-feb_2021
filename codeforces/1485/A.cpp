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
  int a,b;
  cin>>a>>b;
  int c=0;
  int mi=inf;
  for(int i=0;i<=100000;i++){
   int tmp=a,d=b,c=0;
    c+=i;
    d+=i;
    if(d==1)continue;
    while(tmp>0){
      tmp/=d;
      ++c;
    }
    mi=min(c,mi);

  }
  cout<<mi;
  tr;

}
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}