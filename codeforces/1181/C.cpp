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
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define tr cout<<"\n" 
#define br break
#define all(v) v.begin(),v.end()
// #define sz(b) b.size()
// #define maxn 1000010
// #define mod 1000000007
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
3. BY dividing 2 numbers  by their GCD we can make both COPRIME- because we remove the common divisor by;
4. If i want to find the distance from each vertex to each vertex answe is :
   [ans=0; for(i to n): ans+nodes_in_subtree[i]*N-nodes_in_subtree[i]];
*/  

const int maxn=1005;
int dp[maxn][maxn];
char a[maxn][maxn];
int dp1[maxn][maxn];
int up_down[maxn][maxn];
int down_up[maxn][maxn];
void Not_Stable() 
{
int n,m,ans=0;
cin>>n>>m;
F(i,n)F(j,m)cin>>a[i][j];
// right to left;
for(int i=1;i<=n;i++)
{
    for(int j=m;j>=1;j--)
    {
    	if(a[i][j]==a[i][j+1])dp[i][j]=dp[i][j+1]+1;
    	else dp[i][j]=1;
    }
}
// up to down;
for(int j=1;j<=m;j++)
{
	for(int i=n;i>=1;i--)
		{
			if(a[i][j]==a[i+1][j])
			   dp1[i][j]=dp1[i+1][j]+1;
			else dp1[i][j]=1;   
		}

}
// Precalculate the minimun_ from coming from right, from up to down
for(int j=1;j<=m;j++)
{
     F(i,n)
     {
     	if(a[i][j]==a[i-1][j])up_down[i][j]=min(up_down[i-1][j],dp[i][j]);
     	else up_down[i][j]=dp[i][j];
     }
}

for(int j=1;j<=m;j++)
	{ 
		for(int i=n;i>=1;i--)
		{
			if(a[i][j]==a[i+1][j])
			   down_up[i][j]=min(down_up[i+1][j],dp[i][j]);
			else down_up[i][j]=dp[i][j];
		}
	}


F(i,n)
{
	F(j,m)
	{
		int first=dp1[i][j];
		int second=dp1[i+first][j];
		int third=dp1[i+first+second][j];
		if(first!=second)continue;
		if(third<first)continue;
		// Now check the how much coming from right to left, that we have to add;
		int ff=down_up[i][j];
		int ss=down_up[i+first][j];// i+ 3 3 3 ending;
		int tt=up_down[i+3*first-1][j];
		ans=ans+(min(ff,min(ss,tt)));

	}
}


cout<<ans;
tr;
}
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif         
    io;///100000// zeros
    int g=1;
    while (g--)Not_Stable();
    return 0;
}