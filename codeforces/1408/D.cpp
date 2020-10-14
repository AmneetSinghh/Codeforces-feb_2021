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
 #define mod 1000000007
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

void Not_Stable() {
 int n,m;cin>>n>>m;
 int a[n+1],b[n+1],a2[m+1],b2[m+1];
 F(i,n)cin>>a[i]>>b[i];
 F(i,m)cin>>a2[i]>>b2[i];
 vector<ipair> s;
 F(i,n)
 {
     F(j,m)
     {
         if(a[i]>a2[j] || b[i]>b2[j])continue;// no need;
         s.pb({a2[j]-a[i]+1,b2[j]-b[i]+1});
     }
 }

sort(s.begin(),s.end(),greater<>());
int ans=inf;
 int y_max=0;
for(auto c:s)
 {
     ans=min(ans,c.first+y_max);
     y_max=max(y_max,c.second);
 }
     ans=min(ans,y_max);
 cout<<ans;
 tr;

}

int32_t main()
{
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}