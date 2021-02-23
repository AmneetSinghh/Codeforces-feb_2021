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
 
int check(int first,int p,int a)
{
  int temp=first*a;
  int second=(first+1)*a;
  if(temp>=p)return temp;
  else return second;
}
void Not_Stable()
{
  
  int p,a,b,c;
cin>>p>>a>>b>>c;
int first=abs(check(p/a,p,a)-p);
int second=abs(check(p/b,p,b)-p);
int third=abs(check(p/c,p,c)-p);

cout<<min(first,min(second,third));
tr;


} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}