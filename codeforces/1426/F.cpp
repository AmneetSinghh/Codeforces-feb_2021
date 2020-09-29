/*
|********************************************** Not_Stable *********************************************************|
|If someone ask me what you'll do if these days,                                                                    |
|are the last days of your life, I will proudly say                                                                 |
|(I'll PARTICIPATE IN CODING CONTESTS IN CODEOFORCES:)                                                              |
|Q- What is life for me?                                                                                            |
|S- (:Just doing what you love to do:) is the life.                                                                 |
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
#define inf 1000000000000009
#define ff first
#define mod 1000000007
#define ss second
#define br break
using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
	string s;
// int cal(int i,int j)
// {

//   if(j==0)return 1;
//   if(i==0)return 0;
//   int ans=0;
//   if(s[i-1]=='?')ans=ans+cal(i-1,j)+cal(i-1,j)+cal(i-1,j-1);
//   if(s[i-1]!=t[j-1])ans=ans+cal(i-1,j);// just go to the previous
//   if(s[i-1]==t[j-1])ans=ans+cal(i-1,j)+cal(i-1,j-1);
//   return ans;
// }

//-4
void Not_Stable()
{
	int n;
	cin>>n;
	cin>>s;
	std::vector<int> dp(4,0);
    dp[0]=1;
	for(int i=0;i<n;i++)
	{
      int c=s[i];
      if(c=='?')
      {
      	// cases all 3 posibilities baby
      	dp[3]=((dp[3]%mod*3)%mod+dp[2]%mod)%mod;
      	dp[2]=((dp[2]%mod*3)%mod+dp[1]%mod)%mod;
      	dp[1]=((dp[1]%mod*3)%mod+dp[0]%mod)%mod;
      	dp[0]*=3;
      	dp[0]%=mod;
      }
      if(c=='a')dp[1]=(dp[1]%mod+dp[0]%mod)%mod;// occurence of a
      if(c=='b')dp[2]=(dp[2]%mod+dp[1]%mod)%mod;// occurence of b
      if(c=='c')dp[3]=(dp[3]%mod+dp[2]%mod)%mod;// occurence of c
	}
	cout<<dp.back();
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