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

//                  Make your segment tree library;// for all the basic operations;
/*
**Learnings** while solving 250:

1: s=a+b=(a^b)+(a&b)*2;
(a&b)=((a+b)-(a^b))/2;
*/
int n_choose_k(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int mul(int x, int y)
{
    return (x * 1ll * y) % mod;
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

void Not_Stable()
{
    int n;
     cin>>n;
     if(n==1){cout<<"4\n";return;}
     int parkings=n*2-2;
     int ans=0;
     for(int i=1;i<=parkings-n+1;i++){
     int prev=1,nex=1;
     if(i-1>=2)prev=3*power(4,i-2);
      else prev=max((i-1)*3,1ll);

     int j=i+n-1;
     int next=parkings-j;
     if(next<=1)nex=max(next*3,1ll);
     else nex=power(4,next-1)*3;
     ans+=(nex*4*prev);


     }

     cout<<ans;
     tr;
   
}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}