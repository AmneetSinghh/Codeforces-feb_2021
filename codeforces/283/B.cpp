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
#define int unsigned long long int
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
int dp[N][2],a[N];
bool vis[N][2];
int n;
int dfs(int x,int f){

	if(x<=0||x>n) return 0;//terminates
	if(vis[x][f]) return dp[x][f];
	vis[x][f]=1;
	if(f==1) return dp[x][f]=a[x]+dfs(x+a[x],0);     // Second Operation
	else return dp[x][f]=a[x]+dfs(x-a[x],1);        //  First  Operation
	
}



void Waheguru()
{
	cin>>n;
	for(int i=2;i<=n;i++)cin>>a[i];
	for(int i=0;i<=n;i++) dp[i][0]=dp[i][1]=INF;
	for(int i=1;i<n;i++){
		int res=dfs(i+1,0)+i;
		if(res>=INF)cout<<"-1";
		else cout<<res;
		tr;
	}
  
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