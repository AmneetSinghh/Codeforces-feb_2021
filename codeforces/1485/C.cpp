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
int a[100005];
void check(int mid){

}
void Not_Stable()
{


int x,y;
cin>>x>>y;
int ans=0;
// // solution for every b,,,, linear complexity
// for (int i = 1; i <= y; i++) {
//         int val = x / (i + 1);
//         val = min(val, i - 1);
//         ans += max(0ll, val);
//     }


//     // solution for every k,,, becuase,    a=b*k+k, so find for every k;
ans=0;
for(int i=1;i*i<x;i++)ans+=max(0ll,min(y,x/i-1)-i);
cout<<ans;
tr;

    //

}
 
 





int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}