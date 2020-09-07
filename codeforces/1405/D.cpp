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
vector<int> G[100005];
int dp[100005]={0};
int dp_1[100005]={0};
int n,a,b,da,db;
void dfs(int s,int p)
{
	for(int c:G[s])
	{
		if(c==p)continue;
	    dp[c]=dp[s]+1;
		dfs(c,s);
	}
}

void dfs1(int s,int p)
{
	for(int c:G[s])
	{
		if(c==p)continue;
		dp_1[c]=dp_1[s]+1;
		dfs1(c,s);
	}
}
void Waheguru()
{
  cin>>n>>a>>b>>da>>db;
  F(i,n-1)
  {
  	int u,v;
  	cin>>u>>v;
  	G[u].pb(v);
  	G[v].pb(u);
  }

  dfs(a,0);
  int mx=0,ind=0;
  F(i,n)if(dp[i]>mx)mx=dp[i],ind=i;
  dfs1(ind,0);
  F(i,n)if(dp_1[i]>mx)mx=dp_1[i];

  if(dp[b]<=da || 2*da>=db)cout<<"Alice";
  else if(da>=mx || 2*da>=mx)cout<<"Alice";
  else cout<<"Bob";
  tr;
  
  F(i,n)G[i].clear();
  F(i,n)dp[i]=0,dp_1[i]=0;

}


 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Waheguru();
    return 0;
}