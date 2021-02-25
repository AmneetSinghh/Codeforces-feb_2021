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
 
int vis[101]={0};
int dp[101]={0};
map<int,int> h;
void Not_Stable()
{
int n;cin>>n;
int mx=0;
int a[n+1];
for(int i=1;i<=n;i++)
{
cin>>a[i];h[a[i]]=i;
if(a[i]>mx)mx=a[i];
}
int ind=h[mx];
queue<pair<int,int>> q;
q.push({ind,0});

while(!q.empty())
{
	auto ind=q.front().first;//2
	auto level=q.front().second;//0
	dp[ind]=level;
	vis[ind]=1;
	q.pop();
	int ff=-1,ss=-1;
	int l=ind,r=ind;
	// left;
	for(int i=ind-1;i>=1;i--)
	{
		if(!vis[i]){
			--l;
			if(a[i]>ff)ff=a[i];
		}else break;
	}
// right
	for(int i=ind+1;i<=n;i++)
	{
		if(!vis[i]){
			++r;
			if(a[i]>ss)ss=a[i];
		}else break;
	}



    
    if(l!=ind)q.push({h[ff],level+1});
    if(r!=ind)q.push({h[ss],level+1});
}

F(i,n)cout<<dp[i]<<" ";
tr;

h.clear();
for(int i=1;i<=100;i++)vis[i]=0,dp[i]=0;
} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}