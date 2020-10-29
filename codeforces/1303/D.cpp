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
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=100005;
int a[maxn];

void Not_Stable()
{
  int n,m,x,s=0,ans=0;
  cin>>n>>m;
  multiset<int,greater<int>> beta;
  while(m--)cin>>x,s+=x,beta.insert(x);
  if(s<n)cout<<"-1";
  else
  {
  	while(n)
  	{
        auto val=*beta.begin();// this is the last greater value;
        beta.erase(beta.begin());
        if(val<=n)n-=val,s-=val;
        else if(s-val<n)++ans,beta.insert(val/2),beta.insert(val/2);
        else s-=val;// no need to cut tis baby
  	}
  	cout<<ans;
  }
  tr;
}


 
 
int32_t main()
{     
   cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit);
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}