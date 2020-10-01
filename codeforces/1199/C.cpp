/*
|********************************************** Not_Stable *********************************************************|                                                                |
|As I always say Let's not Make it complicated, baby                                                                |
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
|Keep it Simple baby!                                                                                               |
|Rules are meant for breaking,baby                                                                                  |
|Let's Not make it complicated.                                                                                     |
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
#define inf 1000000000000009
#define ff first
#define mod 1000000007
#define ss second
#define br break
#define maxn 1000010

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
*/  
//
int a[400005]={0};
int tot[400005]={0};
void Not_Stable() {
int n,k;cin>>n>>k;
for(int i=1;i<=n;i++)tot[i]=ceil(log2(i));
    F(i,n)cin>>a[i];
    std::vector<int > fc(n+2,0);
    fc[1]=1,k*=8,fc[n+1]=0;
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++){
    	if(a[i]==a[i-1])fc[i]=fc[i-1];
       else fc[i]=fc[i-1]+1;}
       if(tot[fc[n]]*n<=k){cout<<"0";tr;return;}
       int make=0;
       for(int i=fc[n];i>=1;i--){if(tot[i]*n<=k){make=i;break;}}
       	// we just need to find the k consecutives values; maximum
       	std::vector<int> last;
       last.pb(0);
       for(int i=1;i<=n;i++)
       {
        if(i==1)last.pb(i);
        else if(a[i]==a[i-1])last[last.size()-1]++;
        else last.pb(i);
       }
       int mi=inf;
       for(int i=1;i<=n;i++)
       {
       	if(fc[i]<make)continue;
       	else
       	{
             int pre=last[fc[i]-make];// 2-2=0;
             int next=n-i;
             mi=min(mi,pre+next);
       	}
       }
       cout<<mi;tr;


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