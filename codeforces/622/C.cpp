/* It's Practice time */
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
#define inf 1000000000009
using namespace std;
const int maxn=100005;


/*

6 4
1 2 1 1 3 5
1 4 1
2 6 2
3 4 1
3 4 2


*/
int a[200005];
int nxt[200005];
void Not_Stable()
{
int n,q;
cin>>n>>q;
F(i,n)cin>>a[i];
for(int i=n;i>0;i--){
  if(a[i]==a[i+1])nxt[i]=nxt[i+1];
  else nxt[i]=i+1;
}

while(q--){
  int l,r,x;
  cin>>l>>r>>x;
  if(a[l]!=x)cout<<l;
  else if(nxt[l]<=r)cout<<nxt[l];
  else cout<<"-1";

  tr;
}
}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}