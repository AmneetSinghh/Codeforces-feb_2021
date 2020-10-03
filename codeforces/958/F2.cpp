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
// int n,m;
// unordered_map<int,int> h;
// int a[200005],b[200005];
// bool check(int l,int r)
// {
// 	unordered_map<int,int> j;
// 	for(int i=l;i<=r;i++)j[a[i]]++;
//     int flag=0;
// 	F(i,m)if(j[i]<h[i])flag=1;
// 	if(flag==0)return true;
// 	else return false;
// }
void Not_Stable() {
// cin>>n>>m;
// F(i,n)cin>>a[i];
// int sum=0;
// F(i,m)cin>>b[i],h[i]+=b[i],sum+=b[i];
// int mi=inf;
// for(int i=1;i<=n;i++)
// {
// 	int l=i,r=n,ans=0;
// 	while(l<=r)
// 	{
// 		int mid=(l+r)/2;
// 		if(check(i,mid))r=mid-1,ans=mid;
// 		else l=mid+1;
// 	}
// 	if(ans==0)continue;
// 	mi=min(mi,(ans-(i-1))-sum);
// }
// if(mi==inf)cout<<"-1";
// else cout<<mi;
// tr;



	// binary search will not work, so We have to use the 2 pointer
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1],c[n+1]={0};
	F(i,n)cin>>a[i];
	int present=0,total=0;
	F(i,m)
	{
	cin>>b[i];
	if(b[i])present++;
	total+=b[i];
	}
    int res=inf;
	for(int i=1,j=1;i<=n;i++)
	{
        c[a[i]]++;
        if(c[a[i]]==b[a[i]])--present;// I used the one so decrement;

        // cout<<c[a[j]]<<" "<<a[j]<<" "<<b[a[j]]<<" "<<present<<" "<<i<<" "<<j;tr;
        while(j<=i)// j will go till i but not greate than i
        {
            --c[a[j]];
            if(c[a[j]]<b[a[j]]){++c[a[j]];break;}
            ++j;// will not effect of the move the window;
        }
        
        if(!present){res=min(res,(i-j+1)-total);}
	}
	if(res==inf)cout<<"-1";
	else cout<<res;
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
