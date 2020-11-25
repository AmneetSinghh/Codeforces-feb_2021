/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=2001;
const int N = 2e5 + 5;

int mul(int x, int y)
{
    return (x * 1ll * y);
}
int power(int x, int y)
{
    int z = 1;
    while(y > 0)
    {
        if(y % 2 == 1)
            z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {
 



  int n,l,r;cin>>n>>l>>r;
  --r;
  --l;
  if(n==1)cout<<1<<" "<<1;
  else
  {
    int mx=1;
    int val=1;// 2 2 2 
    int i=1;
    for(i=2;i<=n;i++)
    {
       if(r)val*=2,mx+=val,--r;
       else mx+=val;

}    int mi=1;
    i=1;
    val=1;
    for(i=2;i<=n;i++)
    {
       if(l)val*=2,mi+=val,--l;
       else mi+=1;
    }

        cout<<mi<<" "<<mx;
        tr;



  }

 
 }
 }