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
const int maxn=444444;
// int a[maxn];
long long lowbit(long long x){return x&-x;}//that means if we have 10100 it will return 2^2=4;
int n,L[maxn],R[maxn],id[maxn],sz[maxn],ans[maxn];
bool cmp(int x,int y)
{
  return R[x]<R[y];
}
void Add(int rt)
{
  for(;rt<=n*2;rt+=rt&(-rt)) sz[rt]++;
}
int Get(int rt)
{
  int ans=0;
  for(;rt;rt-=rt&(-rt)) ans+=sz[rt];
  return ans;
}
void Not_Stable()
{
int n;cin>>n;
int a[n+1];
int s1=0;
int s=0;
F(i,n)cin>>a[i],s+=a[i];
int ans=s/n;
int rem=s%n;
int c=0;

  F(i,n)
  {
    if(a[i]>ans)
    {
      // for some i can make it eleven;
           if(rem)c+=(a[i]-ans-1),rem--;
            else c+=(a[i]-ans);

    }
  } 



cout<<c;
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