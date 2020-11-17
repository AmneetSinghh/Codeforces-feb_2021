// Time for the Linked-List



#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back

#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009

using namespace std;
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;

void Not_Stable()
{
  int n,c0,c1,h;
  cin>>n>>c0>>c1>>h;
  string s;
  cin>>s;
  int first=0,ff=0,ss=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='0')ff++;
    else ss++;
  }
int mx=c0*ff+c1*ss;
for(int i=0;i<=ss;i++)
{
  int ans=c0*ff+c1*i;
  int change=(ss-i)*h;
  int take=(ss-i)*c0;
  mx=min(mx,ans+change+take);
}

for(int i=0;i<=ff;i++)
{
  int ans=c1*ss+c0*i;
  int change=(ff-i)*h;
  int take=(ff-i)*c1;
  mx=min(mx,ans+change+take);
}
cout<<mx;
 tr;
}


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}