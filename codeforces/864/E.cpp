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
#define mod 1000000007
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
          map-> search,insert,erase     O(1);
unordered_map->   find,insert,erase     O(1);
So we have to find fast like in O(1) use the unordered_set or unordered_map
NOTES*******************************************************************************

1.we can compare two vectors like   v1>v2 and v1==v2 it is also a same condition for v 2d vector,
2.For a fraction p/q, if we prove 1/q is finite, then p/q must be finite.
so std::vector<char> v; reduction of the fraction, it will be not relevant with the numerator p
3. BY dividing 2 numbers  by their GCD we can make both COPRIME- because we remove the common divisor by;
4. If i want to find the distance from each vertex to each vertex answe is :
   [ans=0; for(i to n): ans+template <typename _InputIter>[i]*N-nodes_in_subtree[i]];
*/

// Function for comparing two students according 

const int maxn=3005;
int dp[maxn][maxn];
bool dp1[maxn][maxn];
int n;
struct s  
{ 
int p,t,d,ind;
}a[maxn];  
  
bool comp(s a, s b) 
{ 
 return a.d<b.d;
} 
int calc(int i,int j){
	if(i>n)return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	dp[i][j]=calc(i+1,j);// not take
	if(j+a[i].t<a[i].d)
	{
		int tp=a[i].p+calc(i+1,j+a[i].t);
		if(tp>dp[i][j])dp[i][j]=tp,dp1[i][j]=true;
	}
     
     return dp[i][j];

}

std::vector<int> am;
void backtrack(int i,int j)
{
	if(i>n)return;
	if(dp1[i][j])
	{
		am.pb(a[i].ind);
		backtrack(i+1,j+a[i].t);
	}
	else backtrack(i+1,j);
}

void Not_Stable(){
	 cin>>n;
	 F(i,n)
	 {
	 	cin >> a[i].t >> a[i].d >> a[i].p;
		a[i].ind = i;
	 }
sort(a+1,a+n+1,comp);
	 	memset(dp,-1,sizeof dp);
	 	memset(dp1,false,sizeof dp1);
	 	cout<<calc(0,0);tr;
	 	backtrack(0,0);
	 	cout<<am.size();tr;
	 	for(auto sd:am)cout<<sd<<" ";tr;

}


int32_t main()
{     
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}