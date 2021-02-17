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

void Not_Stable()
{
int n,a,b,c;
cin>>n>>a>>b>>c;
if(a<=b-c || b>n)cout<<n/a;
else
{

int p=n-b;
int k=b-c;
int ans=p/k;
++ans;// for one extra;
int extra=p%k;
int making=(b-c)-extra;
int original=b-making;
ans+=(original/a);
if(ans<=0)cout<<"0";
else cout<<ans;
tr;

}
}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}