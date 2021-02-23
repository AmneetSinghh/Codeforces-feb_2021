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
 

void Not_Stable()
{

int n,m;cin>>n>>m;
string s,t;
cin>>s;
cin>>t;
int j=0;
vector<int> first,second;
for(int i=0;i<s.size();i++)
{
 if(s[i]==t[j])++j,first.push_back(i);
 if(j>=m)break;
}
j=m-1;
for(int i=s.size()-1;i>=0;i--)
{
 if(s[i]==t[j])--j,second.push_back(i);
 if(j<0)break;
}

reverse(all(second));
int mx=1;

// for(auto sd:first)cout<<sd<<" ";tr;
// 	for(auto sd:second)cout<<sd<<" ";tr;

for(int i=0;i<first.size();i++)
{
  // cout<<first[i]<<" "<<second[i];tr;
  if(i+1<first.size())mx=max(abs(first[i]-second[i+1]),mx);
}

cout<<mx;
tr;




} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}