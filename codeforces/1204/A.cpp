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
 



string s;cin>>s;
int one=0;

if(s.size()==1 && s[0]=='0'){cout<<"0";tr;continue;}
for(int i=0;i<s.size();i++)if(s[i]=='1')one++;

if(s.size()%2==0)cout<<s.size()/2;
else
{
  if(one==1)cout<<s.size()/2;
  else cout<<s.size()/2+1;
}

 
 }
 }