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
	
	int n,m;
	cin>>n>>m;
	std::vector<ipair> vc;;
	int mi=inf;
	F(i,m)
	{   int l,r;
		cin>>l>>r;
		vc.pb({l,r});
		mi=min(r-l+1,mi);
	}
	int s=0;
	cout<<mi;tr;
	for(int i=1;i<=n;i++)
	{
     cout<<s<<" ";
     ++s;
     if(s==mi)s=0;
	}



	// sort(all(vc));
// 	int da=0;
// 	int mi=vc[0].first,mx=vc[0].second;
// 	int gl=inf;
// 	int res[n+1]={0};
// 	int flag=0;
// 	for(auto sd:vc)
// 	{
// 	   if(min(sd.second,mx)<max(sd.first,mi))
// 	   {
//           gl=min(gl,mx-mi+1);
//           for(int i=mi,j=0;i<=mx;i++,j++)res[i]=j;
//           mi=sd.first,mx=sd.second;
// 	   }
// 	   else
// 	   {
// 	   	mi=max(sd.first,mi);
//         mx=min(sd.second,mx);
//         flag=0;
// 	   }
// 	}
// 	gl=min(gl,mx-mi+1);
//     for(int i=mi,j=0;i<=mx;i++,j++)res[i]=j;
// cout<<gl;tr;
// F(i,n)cout<<res[i]<<" ";
// tr;
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
