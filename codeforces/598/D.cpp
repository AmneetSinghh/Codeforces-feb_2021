/*
|********************************************** Not_Stable *********************************************************|                                                                |
|   **     *   *******  *********                                                                                   |
|   * *    *  *      *      *                                                                                       |
|   *  *   *  *      *      *                                                                                       |
|   *   *  *  *      *      *                                                                                       |
|   *    * *  *      *      *                                                                                       |
|   *     **   ******       *                                                                                       |
|                            ******    **********   ******    ******  *         *******                             |
|                            *             *       *      *  *    *   *         *                                   |
|                             ******       *       *      *  *  **    *         *******                             |
|                                  *       *       * **** *  *    *   *         *                                   |
|                                 *        *       *      *  *     *  *         *                                   |
|                            *****         *       *      *   ******   *******  *******                             |
|Keep it Simple!                                                                                                    |
|********************************************** Not_Stable ********************************************************* 
*/
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define inf 1000000000000009
using namespace std;
const int maxn=200005;
// int a[maxn];
long long lowbit(long long x){return x&-x;}


void Not_Stable()
{

   int n,m,k;
   cin>>n>>m>>k;
   char a[n+1][m+1];
   F(i,n) F(j,m)cin>>a[i][j];
   int vis[n+1][m+1];
   int dp[1000005]={0};
   memset(vis,0,sizeof vis);

int p=1;
    F(i,n)
    F(j,m)
    {
      int r=i;
      int c=j;
      if(a[r][c]=='*' || vis[r][c]!=0)continue;
    queue<ipair> q;
    q.push({r,c});
    int ans=0;
        vis[r][c]=p;
    while(!q.empty())
    {
        auto f=q.front().first;
        auto s=q.front().second;
        q.pop();
        if(a[f-1][s]=='*')ans++;
         if(a[f+1][s]=='*')ans++;
          if(a[f][s-1]=='*')ans++;
           if(a[f][s+1]=='*')ans++;

           if(a[f-1][s]=='.'  && vis[f-1][s]==0)q.push({f-1,s}),vis[f-1][s]=p;
         if(a[f+1][s]=='.'    && vis[f+1][s]==0)q.push({f+1,s}),vis[f+1][s]=p;
          if(a[f][s-1]=='.'   && vis[f][s-1]==0)q.push({f,s-1}),vis[f][s-1]=p;
           if(a[f][s+1]=='.'  && vis[f][s+1]==0)q.push({f,s+1}),vis[f][s+1]=p;
    }
    dp[p]=ans;
    ++p;
    }
    

    F(i,k)
    {
        int x,y;
        cin>>x>>y;
        int ans=vis[x][y];
        cout<<dp[ans];
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
    while (g--)Not_Stable();
    return 0;
}