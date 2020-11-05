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
#define int unsigned long long
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
#define mod 998244353 
#define inf 10000000000000009
using namespace std;

const int N = 5005;
int n, dp[N][N], a[N];
 
int get(int l, int r)
{
  if(l==1 && r==n)
    return 0;
  int &ans=dp[l][r];
  if(ans!=-1)
    return ans;
  ans=inf;
  if(l-1>=1 && a[l-1]==a[l])
    ans=min(ans, get(l-1, r));// got to left;
  else if(l-1>=1)
    ans=min(ans, 1 + get(l-1, r));
  if(r+1<=n && a[r+1]==a[r])
    ans=min(ans, get(l, r+1));
  else if(r+1<=n)
    ans=min(ans, 1 + get(l, r+1));// to rightl
  if(l-1>=1 && r+1<=n && a[l-1]==a[r+1])
    ans=min(ans, 1 + get(l-1, r+1));
  return ans;
}


void Not_Stable()
{ 
  cin >>n;
    int m = 0;
    for (int i = 1; i <= n; ++i){
        int x;
        cin >>x;
        if (x != a[m])a[++m] = x;// we just want to add only the single instances, no need to get extra;
    }
    n = m;
    memset(dp,-1,sizeof dp);
    int ans=inf;
    for(int i=1;i<=n;i++)ans=min(ans,get(i,i));
      cout<<ans;
    tr;


}

int32_t main()
{     
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("op.txt","w",stdout);
#endif

 int g=1;
 F(i,g)  Not_Stable();
  
    return 0;
}