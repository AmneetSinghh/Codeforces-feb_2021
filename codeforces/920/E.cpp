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
// #define int long long
// #define ll long long
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
using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
const int MAXN = 500100;
unordered_set<int> G[MAXN],s_;/// unordered set find and erase and push is O(1)
vector<int> v;
int n,m,a,b;
void dfs(int s)
{
	v.pb(s);
	std::vector<int> cur;
	for(auto c:s_)
	{
        if(G[s].find(c)!=G[s].end())continue;
        cur.pb(c);
	}
	for(auto sd:cur)s_.erase(sd);
	for(auto sd:cur)dfs(sd);
}
void Not_Stable()
{
	scanf("%d %d",&n,&m);
	F(i,n)s_.insert(i);
	F(i,m)
	{
		scanf("%d %d",&a,&b);
       G[a].insert(b);
       G[b].insert(a);
	}
	int ans=0;
    vector<int> resp;
 
	F(i,n)
	{
		if(s_.find(i)==s_.end())continue;// if not findded means visited;
		v.clear();
		s_.erase(i);
		dfs(i);
		++ans;
		resp.pb((int)v.size());
	    for(auto sd:v)resp.pb(sd);
	    resp.pb(-1);
	}
	int c=0;
	std::vector<int> r_;
	for(int i = 0;i < resp.size();i++){
		if(resp[i] == -1)r_.pb(c-1),c=0;
			else ++c;
	}
	sort(r_.begin(),r_.end());
	cout<<r_.size();tr;
	for(auto sd:r_)cout<<sd<<" ";
		tr;
 
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