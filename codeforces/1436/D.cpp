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


const int maxn=200005;
vector<int> G[maxn];
int a[maxn];
int ex[maxn]={0};
int dp[maxn]={0};
int childs[maxn]={0};
int ans=0;
//dfs
void dfs(int s,int p)
{
    dp[s]+=a[s];
    for(auto c:G[s])
    {
        if(c!=p)
        {
            dfs(c,s);
           childs[s]+=childs[c];
           dp[s]+=dp[c];// this is the total sum which we have to centeralize it baby by just divding by the numenr of ehiclds]

        }
    }
    if(G[s].size()==0)childs[s]=1;
    int cur=dp[s]/childs[s];// cut divide equally by all chidls;
    if(dp[s]%childs[s]!=0)cur++;// this is the center element;
    ans=max(ans,cur);// har vch max leeke jana pencho so that we cn make it equal baby;
}
void Not_Stable(){
    int n,b;
    cin>>n ;
    for(int i=2;i<=n;i++)
        cin>>b,G[b].pb(i);

    for(int i=1;i<=n;i++)cin>>a[i];
    dfs(1,0);
    cout<<ans;
    tr;
}



int32_t main()
{
    io;///100000// zeros
    // SieveOfEratosthenes();
    int g=1;
    while (g--)Not_Stable();
    return 0;
}