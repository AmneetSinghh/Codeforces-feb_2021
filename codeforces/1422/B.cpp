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
#define maxn 1000010
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
*/  

// For checking two numbers has the same prime divisors or not work in log(a);


int Same_Prime_Divisors_Or_Not(int a,int b)
{
	b=__gcd(a,b);
	while(b>1)
	{a/=b,b=__gcd(a,b);}
    if(a==1)return 1;
    else return 0;
}

void Not_Stable() {
int r,c;cin>>r>>c;
int a[r+1][c+1];
F(i,r)F(j,c)cin>>a[i][j];
int ans=0;
int n=r,m=c;
for(int i=1;i<=n/2;i++)
{
      for(int j=1;j<=m/2;j++)
      {
      	int first,second,third,fourth;
      	 first=a[i][j];
      	 second=a[i][m-j+1];
      	 third=a[n-i+1][j];
      	fourth=a[n-i+1][m-j+1];
      	std::vector<int> v;
      	v.pb(first),v.pb(second),v.pb(third),v.pb(fourth);
      	sort(v.begin(),v.end());
      	int val=v[1];// sorted man;
      	ans+=(v[1]-v[0]+v[2]-v[1]+v[3]-v[1]);
   }
}

// handle for negativrs;
int tm=(n+1)/2;
int sc=(m+1)/2;
if(n%2==1){
for(int i=1;i<=m/2;i++)
{
int val=(abs(a[tm][i]+a[tm][m-i+1])/2);
ans+=abs(val-a[tm][i]);
ans+=abs(val-a[tm][m-i+1]);
}
}



if(m%2==1)
	{
		for(int i=1;i<=n/2;i++)
			{

int val=(abs(a[i][sc]+a[n-i+1][sc])/2);
ans+=abs(val-a[i][sc]);
ans+=abs(val-a[n-i+1][sc]);
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
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}
