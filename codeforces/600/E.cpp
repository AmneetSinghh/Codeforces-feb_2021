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

int n,u,v;
int ans[maxn],mx[maxn],in[maxn],cnt[maxn];
std::map<int, int> Maintain[maxn];
std::vector<int > G[maxn];

 
void run_merge(int a,int b)
{
  if (Maintain[in[a]].size()<Maintain[in[b]].size())
      swap(in[a],in[b]);

  // we always wants first map is the largest and second is the smallest;
    // merge small to large pencho
  int id=in[a];
  map<int, int>::iterator it;
  
  for (it=Maintain[in[b]].begin();it!=Maintain[in[b]].end();it++)
  {
    int val=(*it).first;
    int amount=(*it).second;
    Maintain[id][val]+=amount;
    if (Maintain[id][val]>mx[id])
    {
      mx[id]=Maintain[id][val];
      cnt[id]=0;
    }
    if (Maintain[id][val]==mx[id])
      cnt[id]+=val;
  }
}
 
void dfs(int s,int p)
{
  for(auto c:G[s])
    {
      if(c==p)continue;
      dfs(c,s);
      run_merge(s,c);// to maps baby
    }
    ans[s]=cnt[in[s]];
}
void Not_Stable()
{
cin>>n;
F(i,n)
{
  int color;
  cin>>color;
    Maintain[i][color]=1;// This is the Map to Maintain all the things;
    in[i]=i;// index of all the values
    mx[i]=1;// max value for particular index;
    cnt[i]=color;// sum of values for particular index;
}

F(i,n-1)cin>>u>>v,G[u].pb(v),G[v].pb(u);
dfs(1,0);
F(i,n)cout<<ans[i]<<" ";
tr;
}


 
 
int32_t main()
{     
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("op.txt","w",stdout);
#endif
 io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}