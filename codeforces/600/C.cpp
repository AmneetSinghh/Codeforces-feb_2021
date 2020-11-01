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
int n,L[maxn],R[maxn],id[maxn],sz[maxn],ans[maxn],a[maxn];
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

// int dp[31][31][51];
// int calc(int x,int y,int k){
// if(dp[x][y][k]||x*y==k||k==0) return dp[x][y][k];
// int ret=1e9;
// F(i,x-i)f(j,k+1)ret=min(ret,y*y+calc(i,y,k-j)+calc(x-i,y,j));
// F(i,y-i)f(j,k+1)ret=min(ret,x*x+calc(x,i,k-j)+calc(x,y-i,j));
// return dp[x][y][k]=ret;
// }

void Not_Stable()
{
   string s;cin>>s;
   int ch[27]={0};
   for(int i=0;i<s.size();i++)ch[s[i]-'a']++;


// f(i,26)cout<<ch[i]<<" ";
// tr;


   int ans=0;
  for(int i=0;i<26;i++)
  {
    if(ch[i]%2==1)
    {
      for(int j=25;j>=i;j--)
      {
          if(ch[j]%2==1){ch[j]--,ch[i]++;if(i!=j)ans++; break;}
      }
    }
  }


// f(i,26)cout<<ch[i]<<" ";
// tr;

char od='#';
string res="";
  f(i,26)
  {
    char val=i+'a';
    if(ch[i]%2==1){ch[i]--,od=val;}
    int half=ch[i]/2;
    F(j,half)res+=val;
  }

string a=res;
reverse(all(res));
string b=res;
if(od!='#')cout<<a<<od<<b;
else cout<<a<<b;
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