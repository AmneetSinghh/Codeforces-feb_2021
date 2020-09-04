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
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
const int INF = 1e17;
int n,m;
int xx[4]={0,0,1,-1};
int yy[4]={1,-1,0,0};
vector<ipair> mv;
int vis[1001][1001];
char a[1001][1001];
int dp[1001][1001];
int x=0,y=0,st=0,en=0;
 
void dfs(int r,int c)
{
queue<ipair> q;
q.push({r,c});
vis[r][c]=1;
dp[r][c]=0;
while(!q.empty())
{
	int rr=q.front().first;
	int cc=q.front().second;
	q.pop();
	for(int i=0;i<4;i++)
	{
		int ff=xx[i]+rr;
		int ss=yy[i]+cc;
		if(ff<0 || ff>=n || ss<0 || ss>=m || a[ff][ss]=='T')continue;
		if(vis[ff][ss]==0)
		{
				if(dp[ff][ss]>=dp[rr][cc]+1)
				{
					dp[ff][ss]=dp[rr][cc]+1;
					q.push({ff,ss});
				}
				vis[ff][ss]=1;
		}
	}
}
int ans=0;
f(i,n)
{
	 f(j,m){
	 	if(dp[i][j]<=dp[st][en] && a[i][j]>='0' && a[i][j]<='9')
	 	ans+=(a[i][j]-'0');
	 }
}
cout<<ans;
}
 
 
 
void Waheguru()
{
	cin>>n>>m;
	f(i,n)
	{
		f(j,m)
		{
			cin>>a[i][j];
			if(a[i][j]=='E')x=i,y=j;
			if(a[i][j]=='S')st=i,en=j;
		}
	}
 
	f(i,1000)f(j,1000)vis[i][j]=0,dp[i][j]=INF;
	dfs(x,y);
    
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