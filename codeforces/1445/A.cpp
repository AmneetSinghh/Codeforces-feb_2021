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
#define inf 1000000000000009
using namespace std;
const int maxn=100005;
// int a[maxn];
long long lowbit(long long x){return x&-x;}//that means if we have 10100 it will return 2^2=4;
// void Add(int rt)
// {
//   for(;rt<=n*2;rt+=rt&(-rt)) sz[rt]++;
// }
// int Get(int rt)
// {
//   int ans=0;
//   for(;rt;rt-=rt&(-rt)) ans+=sz[rt];
//   return ans;
// }

int a[maxn],b[maxn];
int n,m;
void Not_Stable()
{
  cin>>n>>m;
     F(i,n)cin>>a[i];
        F(i,n)cin>>b[i];

        sort(a+1,a+1+n);
        sort(b+1,b+1+n);
        int flag=0;
        int j=1;
        for(int i=n;i>=1;i--)
        {
          if(b[i]+a[j]>m)flag=1;
          ++j;
        }

        if(!flag)cout<<"Yes";
        else cout<<"No";
        tr;
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