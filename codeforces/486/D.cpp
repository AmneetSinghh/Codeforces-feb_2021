/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
int inf=1e17;
int n,d,a[2001],ans=0;
int dp[2001];
vector<int> G[2001];
int vis[2001]={0};
int current=0;
void dfs(int s,int p,int val)
{
   dp[s]=1;
   for(int c:G[s])
   {
   	 if(c==p)continue;
   	 if(a[c]>=val && a[c]<=val+d)
   	 {
   	 	if(a[c]==val && c<current)continue;
   	 	dfs(c,s,val);
   	 	dp[s]*=(1+dp[c]);
   	 	dp[s]%=mod;
   	 }
   }
}
void Waheguru()
{
	cin>>d>>n;
	F(i,n)cin>>a[i];
	F(i,n-1)
	{
		int u,v;
		cin>>u>>v;
		G[u].pb(v);
		G[v].pb(u);
	}
	F(i,n)
	{
		current=i;
		F(j,n)dp[j]=0;
		dfs(i,0,a[i]);
		ans+=dp[i];
		if(ans>=mod)ans-=mod;
	}
	
	cout<<ans;tr;
}
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}