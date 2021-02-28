/* not_stable but Believer */
/* Codeforces Global Round 13_/28/02/2021 */
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

int n,u,v;
cin>>n>>u>>v;
int a[n+1];
F(i,n)cin>>a[i];
int ans=0;
int flag=0;
int val=0;
for(int i=1;i<=n-1;i++)
{
  if(a[i]==a[i+1]){}
  else {flag=1;}
  if(abs(a[i]-a[i+1])>=2)val++;
}

if(val>=1)cout<<"0\n";
else if(flag==0)
{
	cout<<min(u+v,v+v);
	tr;
}
else
{
	cout<<min(u,v);
	tr;
}



}
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}