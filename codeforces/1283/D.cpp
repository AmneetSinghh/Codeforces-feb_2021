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
#define ss second
#define ff first
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

const int maxn=200005;

void Not_Stable()
{


int mi_range=-2e9;
int mx_range=2e9;


	set<ipair> pos;
	set<int> ans;
	set<int> vis;
	int n, m; cin >> n >> m;
 
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		vis.insert(x);
	}
 
	for (auto el : vis)
	{
		if (!vis.count(el - 1))
			pos.insert({1, el - 1});
 
		if (!vis.count(el + 1))
			pos.insert({1, el + 1});
	}
	
	// all the unvisited positions;
 
	int dst = 0;
 
	while (m--)
	{
		auto it = pos.begin();
		int x = it->ss;
		int ds = it->ff;
		pos.erase(it);
		
		
		// if the position is visited, then continue;
 
		if (vis.count(x))
		{
			m++;
			continue;
		}
 
		ans.insert(x);
		dst += ds;
		vis.insert(x);
 
		if (!vis.count(x - 1)  && x-1>=mi_range)
			pos.insert({ds + 1, x - 1});
 
		if (!vis.count(x + 1)&& x+1<=mx_range)
			pos.insert({ds + 1, x + 1});
	}
 
	cout << dst << '\n';
	for (auto el : ans)
		cout << el << ' ';
	cout << '\n';
}



int32_t main()
{     
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}