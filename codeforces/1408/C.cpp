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
#define inf 1000000000000009
#define ff first
#define mod 1000000007
#define ss second
#define br break
#define maxn 1000010

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
*/  
//

void Not_Stable() {
	    int n,l;
	    cin>>n>>l;
	    std::vector<int> a(n);for(auto& v:a)cin>>v;
	    double ans=0;
	    double first=0,second=l;// starting points
	    double vo=1,v1=1;// speeds
	    int lo=0,hi=n-1;// indexes
	    while(lo<=hi){
	    	double s1=(a[lo]-first)/vo;// first reach
	    	double s2=(second-a[hi])/v1;// second reach
	    	if(s1<=s2){// if in some point first reaches first
	    		ans+=s1;// increment to the final answer
	    		first=a[lo];// so first now becomse this position
	    		second-=s1*v1;// second position minus euql to current time travel into its speed abby
	    		++vo,++lo;
	    	}
	    	else
	    	{
	    		ans+=s2;// time to reach
	    		second=a[hi];
	    		first+=s2*vo;// its speed
	    		++v1,--hi;
	    	}

	    }
	    ans+=(second-first)/(vo+v1);
	    cout<<fixed<< setprecision(15)<<ans;
	    tr;
}
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
            
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}