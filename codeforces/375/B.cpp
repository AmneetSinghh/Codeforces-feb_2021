// /Code by : Harry_Singh/
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
#define mod 998244353
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
#define range 100000000000000
// directions
 
void Pencho()
{
int n,m;
cin>>n>>m;
char a[n+1][m+1];
F(i,n)F(j,m)cin>>a[i][j];
int dp_count[5012]={0};
int res=0;
// first go from top to down for each and evevy column consecutively
F(i,m)// For each column baby
{
    int dp_main[5012]={0};
    F(j,n)
    {
    	if(a[j][i]=='1')
    	dp_count[j]++,dp_main[dp_count[j]]++;
        else
        dp_count[j]=0;
    }
    for(int j=m;j>=1;j--)
    	dp_main[j]+=dp_main[j+1],res=max(res,dp_main[j]*j);
}
cout<<res;
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
    while (g--)Pencho();
    return 0;
}