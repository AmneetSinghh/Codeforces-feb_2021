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
#define ll long long
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
#define N 100005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */

vector<int> G[100005];
int a,b,c=0,d=0,n;
int dp[100005]={0};
int ans[100005]={0};
void dfs(int s,int p)
{

   for(auto c:G[s])
   {
     if(c!=p)
     {
      dfs(c,s);
      dp[s]+=dp[c];
     }
   }
   int val=-1;
   for(auto c:G[s])
    if(c!=p)val=max(val,dp[c]);
  val=max(val,n-dp[s]);
  ans[s]=val;
}

void Waheguru()
{
cin>>n;
F(i,n-1)
{
  int u,v;
  cin>>u>>v;
  G[u].pb(v);
  G[v].pb(u);
}

F(i,n)dp[i]=1;
dfs(1,0);
int t=inf;
F(i,n)t=min(ans[i],t);
int a=0,b=0,c=0,d=0;
F(i,n)
{
   if(t==ans[i] && a==0)a=i;
   else if(t==ans[i] && a!=0)
   {
    for(auto sd:G[a])
      if(sd!=i)b=sd;
    c=i;
   }
}

if(c==0)cout<<G[1][0]<<" "<<1<<"\n"<<G[1][0]<<" "<<1<<"\n";
else{
  cout<<a<<" "<<b;
  tr;
  cout<<c<<" "<<b;
  tr;
}

F(i,n)G[i].clear();
F(i,n)ans[i]=inf;
F(i,n)dp[i]=1;
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