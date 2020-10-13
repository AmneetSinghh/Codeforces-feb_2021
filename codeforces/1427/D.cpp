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
#define sz(b) b.size()
#define maxn 1000010
// #define mod 1000000007
#define inf 1000000000000009
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
NOTES*******************************************************************************
 
1.we can compare two vectors like   v1>v2 and v1==v2 it is also a same condition for v 2d vector,
2.For a fraction p/q, if we prove 1/q is finite, then p/q must be finite. 
so after reduction of the fraction, it will be not relevant with the numerator p
3. BY dividing 2 numbers  by their GCD we can make both COPRIME- because we remove the common divisor byby;
 
*/  
 
// For checking two numbers has the same prime divisors or not work in log(a);
const int MOD = 998244353;
const int N = 1e6 + 7;
int Same_Prime_Divisors_Or_Not(int a,int b)
{
	b=__gcd(a,b);
	while(b>1)
	{a/=b,b=__gcd(a,b);}
    if(a==1)return 1;
    else return 0;
}
int add(int a, int b) {
	a += b;
	if (a >= MOD) a -= MOD;
	return a;
}
int mul(int a, int b) {
	return a * b % MOD;
}
int binpow(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res = mul(res, a);
		a = mul(a, a);
		b >>= 1;
	}
	return res;
}
 
// int n;
// int sum[1000001]={0};
//  void update(int l,int r,int rt,int pos,int x){
// 	if(l==r){
// 		sum[rt]=x; return;
// 	}
// 	int mid=(l+r)>>1;
// 	if(pos<=mid) update(l,mid,rt<<1,pos,x);
// 	else update(mid+1,r,rt<<1|1,pos,x);
// 	sum[rt]=sum[rt<<1]+sum[rt<<1|1];
// }
// int query(int l,int r,int rt,int L,int R){
// 	if(L<=l&&r<=R)return sum[rt];
// 	int mid=(l+r)>>1,ans=0;
// 	if(L<=mid) ans+=query(l,mid,rt<<1,L,R);
// 	if(R >mid) ans+=query(mid+1,r,rt<<1|1,L,R);
// 	return ans; 
// }
void Not_Stable() {
int n;
cin>>n;
int a[n+1],b[n+1];
F(i,n)cin>>a[i],b[i]=a[i];
sort(b+1,b+1+n);
int c=0;
std::vector<int> current[n+1];
if(n==1){cout<<"0";tr;return;}
for(int i=1;i<=n;i++)
{
	std::vector<int> tom;
    int flag=0;
    F(i,n)if(a[i]!=b[i])flag=1;
    if(!flag)break;
    // make one moves; ascending;
    if(i%2==1)
    {

    	int val=1;
    	int m=n;
        for(int j=n-1;j>=1;j--)
        {
          if(a[j]<a[j+1])++val;
          else
          {
             int t=m-val;
             current[i].pb(val);
             for(int k=t+1;k<=m;k++)tom.pb(a[k]);
             m=t,val=1;
          }
        }
              current[i].pb(val);
             int t=m-val;
             for(int k=t+1;k<=m;k++)tom.pb(a[k]);
             m=t,val=1;
         for(int k=0;k<tom.size();k++)a[k+1]=tom[k];
         reverse(current[i].begin(),current[i].end());


    }
    else
    {
        int val=1;
    	int m=n;
        for(int j=n-1;j>=1;j--)
        {
          if(a[j]>a[j+1])++val;
          else
          {
             int t=m-val;
             current[i].pb(val);
             for(int k=t+1;k<=m;k++)tom.pb(a[k]);
             m=t,val=1;
          }
        }
              current[i].pb(val);
             int t=m-val;
             for(int k=t+1;k<=m;k++)tom.pb(a[k]);
             m=t,val=1;
         for(int k=0;k<tom.size();k++)a[k+1]=tom[k];
         reverse(current[i].begin(),current[i].end());
    }
    ++c;

    // F(i,n)cout<<a[i]<<" ";
    // tr;
    F(i,n)if(a[i]!=b[i])flag=1;
    if(!flag)break;


    // if(i==5)break;

}

cout<<c;
tr;
F(i,c)
{
	cout<<current[i].size()<<" ";
      for(auto sd:current[i])cout<<sd<<" ";
      	tr;
}


}
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif         
    io;///100000// zeros
    int g=1;
    while (g--)Not_Stable();
    return 0;
}