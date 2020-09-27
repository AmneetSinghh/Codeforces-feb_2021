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
#define tr cout<<"\n" 
#define br break
#define all(v) v.begin(),v.end()
#define inf 100005
#define ff first
#define ss second
#define br break
using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
int n, m, c0, d0, a[11], b[11], c[11], d[11];
 
int dp[11][1001];
void Waheguru()
{


    cin >> n >> m >> c0 >> d0;
    for (int i = 1; i <= m; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

f(i,n+1)if(i-c0>=0)dp[0][i]=d0+dp[0][i-c0];// just the initial making bro



F(i,m){
    f(w,n+1){// all the weights
        dp[i][w]=dp[i-1][w];
        for(int k=1;k<=a[i]/b[i] &&w>=k*c[i];k++)
            dp[i][w]=max(dp[i][w],k*d[i] + dp[i-1][w-k*c[i]]);

    }
}

cout<<dp[m][n];
tr;

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