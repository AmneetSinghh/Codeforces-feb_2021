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
#define N 200005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
int a[N+1];
int dp[N+1][3];
int n;
int cal(int i,int j)
{
  if(i==n+1)return 0;
  if(dp[i][j]!=-1)return dp[i][j];
  int res=inf;
  if(j==0)// person first
  {
   res=min(res,a[i]+cal(i+1,1));
   if(i<n)res=min(res,a[i]+a[i+1]+cal(i+2,1));// this means another person
  }
  else
  {
    res=min(res,cal(i+1,0));
    if(i<n)res=min(res,cal(i+2,0));
  }

  dp[i][j]=res;
  return res;
}






void Waheguru()
{
  cin>>n;
  F(i,n)cin>>a[i];
  //  for(int i=0;i<=n;++i)for(int j=0;j<2;++j)dp[i][j]=1e9;
  // dp[0][0]=0;
  //       for(int i=0;i<n;++i) {
  //           // j == 0
  //           dp[i+1][1] = min(dp[i+1][1], dp[i][0] + a[i+1]);
  //           dp[i+2][1] = min(dp[i+2][1], dp[i][0] + a[i+1] + a[i+2]);
  //           // j == 1
  //           dp[i+1][0] = min(dp[i+1][0], dp[i][1]);
  //           dp[i+2][0] = min(dp[i+2][0], dp[i][1]);
  //       }
  //       cout<<min(dp[n][0],dp[n][1])<<endl;



  F(i,n)dp[i][1]=-1,dp[i][0]=-1;
  cout<<cal(1,0);
  tr;
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