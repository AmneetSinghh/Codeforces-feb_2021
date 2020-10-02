/*
|********************************************** Not_Stable *********************************************************|                                                                |
|As I always say Let's not Make it complicated, baby                                                                |
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
|Keep it Simple baby!                                                                                               |
|Rules are meant for breaking,baby                                                                                  |
|Let's Not make it complicated.                                                                                     |
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
#define ff first
#define ss second
#define maxn 1000010
#define mod 1000000007
#define inf 1000000000000009
#define vs vector<string>
#define vi vector<int>

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

NOTE:we can compare two vectors like   v1>v2 and v1==v2 it is also a same condition for v 2d vector,
*/  
//



void Not_Stable() {

 int n,m;
 cin>>n>>m;
 char a[n+1][m+1];
 F(i,n)F(j,m)cin>>a[i][j];
 int dp[n+1][m+1][2];
 f(i,n+1)f(j,m+1)f(k,2)dp[i][j][k]=0;
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=m;j++)
 	{
        if(a[i][j]=='1')dp[i][j][0]=dp[i][j][1]=0;
        else
        {
        	if(i-1>=1)dp[i][j][1]=dp[i-1][j][1];// up
        	if(j-1>=1)dp[i][j][0]=dp[i][j-1][0];
        	dp[i][j][0]++,dp[i][j][1]++;
        }
 	}
 }


// at evrey position go to the up and check;
 int gl=0;
 F(i,n){
 	F(j,m){
 		int cc=0;
 		int left=dp[i][j][0];
 		int up=dp[i][j][1];
 		int mi=inf;
 		// go to the up;
 		for(int k=i,into=1;k>=max(1ll,i+1-up);k--,into++)
 		{
               mi=min(mi,dp[k][j][0]);
               gl=max(gl,2*(mi+into));
 		} 
 	}
 }
 cout<<gl;
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
    while (g--)Not_Stable();
    return 0;
}
