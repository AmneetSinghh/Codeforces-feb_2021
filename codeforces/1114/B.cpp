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



void Not_Stable()
{
int n,m,k;cin>>n>>m>>k;
std::vector<int>a(n+1);
int sum=0;
multiset<int> mt;
F(i,n)
{
cin>>a[i];
sum+=a[i];
mt.insert(a[i]);
}
while(mt.size()>m*k)
{
  sum-=(*mt.begin());
  mt.erase(mt.begin());
}
cout<<sum;tr;
int count=0;
F(i,n)
{
	auto sd=mt.find(a[i]);
    if(sd!=mt.end())
    {
    	++count;
    	mt.erase(sd);
    	if(count%m==0 && count<m*k)cout<<i<<" ";
    }
}
tr;

}

int32_t main()
{     
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("op.txt","w",stdout);
#endif

 int g=1;
 F(i,g)  Not_Stable();
  
    return 0;
}