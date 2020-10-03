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

void Not_Stable() {
int x,d;
cin>>x>>d;
// check how may  2^ powers
if(x<=1000)
{
	cout<<x;tr;
	for(int i=1;i<=x;i++)cout<<i*d<<" ";
		tr;
	return;
}
int c=1,time=1;
vector<int> vc;
while(true)
{
	c*=2;
	if(c>=x)break;
	++time;
}


while(x)
{
      while(c-1<=x){x-=(c-1),vc.pb(time);}
      c/=2;
      --time;
}

int pre=1;
vector<int> ans;
for(auto sd:vc)
{int range=sd,i=0;
	while(i<range)ans.pb(pre),++i;// 1 2 3 4 5 6 7 8 9 10


		 pre=ans[ans.size()-1]+(d+d);
}

cout<<ans.size();tr;
for(auto sd:ans)cout<<sd<<" ";
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
