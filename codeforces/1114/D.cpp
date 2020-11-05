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
#define inf 1000000000000000009
using namespace std;

const int N = 5005;
int n, dp[N][N], a[N];
 
int get(int l, int r){
    if (l>=r) return 0;
    if(dp[l][r]!=-1)return dp[l][r];
    // go to the left, else go to the right, else check,  check if left side value==right side values, go from both left +1 and right -1;
    dp[l][r] = min(get(l, r - 1) + 1, get(l + 1, r) + 1);
    if (a[l] == a[r])
      dp[l][r] = min(dp[l][r], get(l + 1, r - 1) + 1);// the main condition   when 4 5 4
    return dp[l][r];
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
    cout <<get(1, n);


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