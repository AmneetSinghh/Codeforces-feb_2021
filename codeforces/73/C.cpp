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
const int mx=233;
map<pair<char,char>,int>  hp;
int dp[mx][mx][mx];
int N,k;
string s;
int calc(char i,int j,int k)
{
    if(j==N)return 0;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    int ba=calc(s[j],j+1,k)+hp[{i,s[j]}];// No-change;
    if(k)
    {
        for(char x='a';x<='z';x++)
            ba=max(ba,calc(x,j+1,k-1)+hp[{i,x}]);// x is the changing string;
    }
    return dp[i][j][k]=ba;
}


void Not_Stable()
{
    cin>>s>>k;
    memset(dp,-1,sizeof dp);
    N=s.size();
    int n;
    cin>>n;
    F(i,n){
        char a,b;int c;
        cin>>a>>b>>c;
        hp[{a,b}]=c;
    }
    cout<<calc('*',0,k);
    tr;
}

int32_t main()
{
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}

