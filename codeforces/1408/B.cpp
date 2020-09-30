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


	    int n,k,a;
	    cin>>n>>k;
	    set<int> s;
	    F(i,n)cin>>a,s.insert(a);
	    if(k==1)// special case;
	    {
            if(s.size()==1)cout<<"1";
            else cout<<"-1";
            tr;
            return;
	    }
	    if(k>=s.size())cout<<"1";
	    else{


	    	int c=s.size();
	    	if((c-k)%(k-1)==0)cout<<(c-k)/(k-1)+1;
	    	else cout<<(c-k)/(k-1)+2;
	    }
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