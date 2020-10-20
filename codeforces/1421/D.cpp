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
#define maxn 1000010
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
3. BY dividing 2 numbers  by their GCD we can make both COPRIME- because we remove the common divisor byby;
 
*/  
 

void Not_Stable() {
int x,y;
cin>>x>>y;
int aa[7];
F(i,6)cin>>aa[i];
int a,b,c,d,e,f;
a=min(aa[1],aa[2]+aa[6]);
b=min(aa[2],aa[1]+aa[3]);
c=min(aa[3],aa[4]+aa[2]);
d=min(aa[4],aa[3]+aa[5]);
e=min(aa[5],aa[4]+aa[6]);
f=min(aa[6],aa[1]+aa[5]);
int ans=0;
if(x>=0 && y>=0)// first quadrant
{
  int dis=min(x,y);
  x-=dis;
  y-=dis;
  ans+=(dis*a);
  if(x>0)ans+=(f*x);
  if(y>0)ans+=(b*y);
}
else if(x<=0 && y>=0)// second quadrant
{
	x=-x;
	ans+=(x*c);
	ans+=(y*b);
}
else if(x<=0 && y<=0)// third quadrant
{
   x=-x,y=-y;
   int dis=min(x,y);
   x-=dis;
   y-=dis;
   ans+=(dis*d);
  if(x)ans+=(c*x);
  if(y)ans+=(e*y);
}
else if(x>=0 && y<=0)
{
    y*=-1;
	ans+=(x*f);
	ans+=(y*e);
}
cout<<ans;tr;
}
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif         
    io;///100000// zeros
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}