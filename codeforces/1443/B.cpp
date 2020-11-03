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
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353 
#define inf 1000000000000009
using namespace std;
int lowbit(long long x){return x&-x;}//that means if we have 10100 it will return 2^2=4;

void Not_Stable()
{
	string s;
	int a,b;
	cin>>a>>b;
	cin>>s;
       int  n=s.size();
        int dem=inf;
        int ans=0;
        f(i,n) {if(s[i]=='1')ans+=min(a,b*dem),dem=0; else dem++;}
        
        cout<<ans;tr;
}
 

 
 
int32_t main()
{     
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("op.txt","w",stdout);
#endif
 io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}