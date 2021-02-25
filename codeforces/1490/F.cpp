/* not_stable but Believer */
// div 3 round; code by not_stable;
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


int n;
cin>>n;
int a[n+1];
map<int,int> h;
F(i,n)
{
	cin>>a[i];
	h[a[i]]++;
}
map<int,int> o;
for(auto sd:h){
	o[sd.second]++;// 70 =1, 90 =12;    2=2;
}
int dp[o.size()+12]={0};
int dp1[o.size()+12]={0};// times;
int dp2[o.size()+12]={0};// times;
int i=1;
for(auto sd:o)
{
   dp[i]=dp[i-1]+sd.second;// number of values;
   dp2[i]=dp2[i-1]+sd.first;// number of values;
   dp1[i]=dp1[i-1]+ ((sd.first)*(sd.second));// total numher of values;
   ++i;
}

int r=0;
int l=0;
int ans=n;
for(int i=o.size();i>=1;i--)
{
	int cur=dp1[i]-dp1[i-1];//only for 90; total values;
	int next=r*(dp2[i]-dp2[i-1]);// 70* how many 70's
	ans=min(ans,n-(cur+next));// 70*12 + 3*70
	r+=(dp[i]-dp[i-1]);// only for 80 how many values; number of occurences;
}





cout<<ans;
tr;

}
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}