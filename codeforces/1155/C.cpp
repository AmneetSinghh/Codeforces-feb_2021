#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int start=-1;
int32_t main() {
    io;
  int g=1;
    while (g--){

int n,m;
cin>>n>>m;
set<int> s;
int a[n+1],p[m+1];
   F(i,n)cin>>a[i],s.insert(a[i]);
   F(i,m)cin>>p[i];

if(n==1)
{
  cout<<"YES";tr;
  cout<<a[1]<<" "<<1;
  tr;
  return 0;
}

int gc=a[1];
for(int i=2;i<=n;i++)gc=gcd(gc,a[i]);
for(int i=1;i<=m;i++)
{
  if(gc%p[i]==0){start=i;break;}
}

if(start!=-1)
{
  cout<<"YES\n"<<p[start]<<" "<<start;tr;return 0;
}

    int first=*s.begin();
    gc=-1;
    int pre=first;
    for(auto sd:s)
    {
      if(sd-pre>0)
      {
        if(gc==-1)gc=sd-pre,pre=sd;
        else gc=gcd(sd-pre,gc),pre=sd;
      }
    }



for(int i=1;i<=m;i++)
{
  if(gc%p[i]==0){start=i;break;}
}
if(start!=-1)
{
  cout<<"YES\n"<<first<<" "<<start;tr;return 0;
}


cout<<"NO";tr;









}
}