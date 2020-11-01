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
long long lowbit(long long x){return x&-x;}//thatz means if we have 10100 it will return 2^2=4;
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


void Not_Stable()
{

int a,b;
cin>>a>>b;
if(a%b){cout<<a;tr;return;}
std::vector<ipair> v;
//     if 10 made of 2*5,   300 also made of this prime factoriaiont just delete this factorizatoins, then add the this -1 factorization
for(int i=2;i*i<=b;i++)
{
  if(b%i)continue;
  int cnt=0;
  while(b%i==0){b/=i,cnt++;}
  v.pb({i,cnt});
}
if(b>1)v.pb({b,1});

int ans=1;
for(auto sd:v)
{
  int x=sd.first;
  int y=sd.second;
  int temp=a;
  while(temp%x==0)temp/=x;
  // all the prime factorizations cuted penchod;
  f(j,y-1)temp*=x;
  ans=max(ans,temp);
}
cout<<ans;
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