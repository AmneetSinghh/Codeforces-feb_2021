/* not_stable but Believer */

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
 
 string s;cin>>s;
 for(int i=0;i<s.size();i++)
 {
  if(i%2==0){
  char cur=s[i];
  for(int j='a';j<='z';j++)
  {
    if(j!=cur){s[i]=j;break;}
  }
}
else
{
char cur=s[i];
  for(int j='z';j>='a';j--)
  {
    if(j!=cur){s[i]=j;break;}
  }
 }

}

cout<<s;
tr;

}
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}