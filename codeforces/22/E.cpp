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
#define sz(z) z.size()
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

int parent[100005]={0};
int in[100005]={0};
std::vector<int> b,e;
int vis[100005]={0};

/// finding the root answer;
int cycle(int s)
{
	vis[s]=1;
	if(!vis[parent[s]])return cycle(parent[s]);
	return s;// this is the annswer; when finded the cyclel
}
void Not_Stable() {

	int n,a;cin>>n;
	F(i,n)
	{
		cin>>a;
		parent[i]=a;// that means From i can go to this vertedx;
		in[a]++;
	}
	int subsets=0;
	F(i,n){
		if(in[i]==0){// if the indegree is zero, we have to connect it to someone;
			 b.pb(i);
			 e.pb(cycle(i));// ending point
			 ++subsets;
		}
	}

	// check the columns whcih are not visited that means, are in the cycles,
	int save=subsets;

	// still there are some values which are not visited, if left, then just visit it and add to the set,
	F(i,n){
		if(vis[i]==0){// if the indegree is zero, we have to connect it to someone;
			 b.pb(i);
			 e.pb(cycle(i));// ending point
			 ++subsets;// connect it man,
		}
	}
    // for(auto sd:b)cout<<sd<<" ";
    // 	tr;
    // for(auto sd:e)cout<<sd<<" ";
    // 	tr;
	if(save==0 && subsets==1)subsets=0;// this is a simple path


	cout<<subsets;
	tr;
	f(i,subsets)
	cout<<e[i]<<" "<<b[(i+1)%subsets]<<"\n";// just cylindrically man




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
