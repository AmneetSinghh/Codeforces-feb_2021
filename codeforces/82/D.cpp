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
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define tr cout<<"\n"
#define br break
#define all(v) v.begin(),v.end()
#define mod 1073741824
#define inf 1000000000000009
using namespace std;
/*  I know I have that Ability, I can do anything,
I'll be The _Candidate Master_
(Patience and Practice)  */

/*****************************************Things to remember in Contests*******************************************
          set->  find ,insert,erase   is logn;                 All the things are ordered
          map-> searching in map is O(1) and others are log(n);   All the things are ordered by values smallest to largest
unordered_set->  find ,insert,erase     O(1);
unordered_map->   find,insert,erase     O(1);
So we have to find fast like in O(1) use the unordered_set or unordered_map
NOTES*******************************************************************************

1.we can compare two vectors like   v1>v2 and v1==v2 it is also a same condition for v 2d vector,
2.For a fraction p/q, if we prove 1/q is finite, then p/q must be finite.
so after reduction of the fraction, it will be not relevant with the numerator p
3. BY dividing 2 numbers  by their GCD we can make both COPRIME- because we remove the common divisor byby;
*/

const int mx=1005;
int n;
int a[mx];
int dp[mx][mx];
int calc(int i,int j)
{
    if(dp[i][j]!=-1)return dp[i][j];
    if(j>n)return dp[i][j]=a[i];
    if(j==n)return dp[i][j]=max(a[i],a[j]);
    dp[i][j]=max(a[i],a[j])+calc(j+1,j+2);
    dp[i][j]=min(dp[i][j],max(a[i],a[j+1])+calc(j,j+2));
    dp[i][j]=min(max(a[j],a[j+1])+calc(i,j+2),dp[i][j]);
    return dp[i][j];
}
void output(int i,int j)
{
if(j>n){cout<<i;tr;}
else if(j==n){cout<<i<<" "<<j;tr;}
else if(dp[i][j]==max(a[i],a[j])+dp[j+1][j+2])
{
    cout<<i<<" "<<j;tr;
    output(j+1,j+2);// next find baby
}
else if(dp[i][j]==max(a[i],a[j+1])+dp[j][j+2])
{
    cout<<i<<" "<<j+1;tr;
    output(j,j+2);
}
else
{
    cout<<j<<" "<<j+1;tr;
    output(i,j+2);
}
}

void Not_Stable()
{
    cin>>n;
    memset(dp,-1,sizeof dp);
    F(i,n)cin>>a[i];
    cout<<calc(1,2);// Previous_to_compare, current_to_compre
    tr;
    output(1,2);

}

int32_t main()
{
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}

