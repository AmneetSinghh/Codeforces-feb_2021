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
int n;
cin>>n;
int a[n+1],b[n+1];
F(i,n)cin>>a[i];
F(i,n)cin>>b[i];
vector<ipair> vc;
F(i,n)vc.pb({a[i],b[i]});
vc.pb({0,0});
sort(all(vc));
int pre[n+1]={0};
for(int i=1;i<vc.size();i++)
pre[i]=pre[i-1]+vc[i].second;
int ans=min(vc[n].first,pre[n]);
int i=1;
// for(auto sd:vc)cout<<sd.first<<" "<<sd.second<<"\n";
// F(i,n)cout<<pre[i]<<" ";
// tr;
while(i<=n)
{
	int ff=vc[i].first;
	int ss=vc[i].second;
	int j=i;
	// cout<<ff<<" "<<ss<<" "<<i;
	// tr;
	while(j+1<=n && ff==vc[j+1].first){++j;}
	if(j==i)ans=min(max(ff,(pre[n]-pre[j])),ans);
	else ans=min(max(ff,(pre[n]-pre[j-1])),ans);
	
	
	// cout<<pre[n]-pre[j]<<" "<<pre[n]-pre[j-1]<<"----> "<<ans;
	// tr;
	
	if(j!=i)i=j;
	else ++i;

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