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
int n,k,m;
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




void Not_Stable() {
int n;
cin>>n;
map<int,int> b;
int a[n+1],temp[n+1]={0};
F(i,n)cin>>a[i],b[a[i]]=i;
if(n<=2){cout<<"1";tr;return;}
sort(a+1,a+1+n);
/// equal conditions: man;
for(int i=1;i<=n;i++)
temp[i]=a[i]-a[1];// 0 2 4 6 
int c=1;
int j=1;
for(int i=2;i<=n;i++)
{
 int val=temp[2]*j;
 // cout<<val<<" "<<temp[i];tr;
 if(val==temp[i])++c,++j;
 else 
 {
 	while(i<=n && val!=temp[i])++i;
 	if(i<=n)++c,++j;
  }
 }




 // F(i,n)cout<<temp[i]<<" ";
 // tr;
 // cout<<c;
 // tr;
  if(c==n)cout<<b[a[n]];
 else if(c==n-1)
 {
 	int flag=0;
 	int j=1;
for(int i=2;i<=n;i++)
{
 int val=temp[2]*j;
 if(val==temp[i])++c,++j;
 else 
 {
 	flag=b[a[i]];break;
  }
 }
 cout<<flag;tr;

 }
 else if(c<=n-2)// omg condition all we have is delete the min element or second mind;
 {

 	// Two options we have pencho;
    for(int i=2;i<=n;i++)
    	temp[i]=a[i]-a[2];// 1? 2<-0 3<-may be 4 5
    int c=1,j=1;
for(int i=3;i<=n;i++)
{
 int val=temp[3]*j;
 if(val==temp[i])++c,++j;
 else 
 {
 	while(i<=n && val!=temp[i])++i;
 	if(i<=n)++c,++j;
  }
 }
 if(c==n-1)cout<<b[a[1]];
 else 
 {
 	// one option left; we can delete the second element; bab
 	// Two options we have pencho;
    for(int i=1;i<=n;i++)
    	temp[i]=a[i]-a[1];// same technique;
    int c=1,j=1;
for(int i=3;i<=n;i++)
{
 int val=temp[3]*j;
 if(val==temp[i])++c,++j;
 else 
 {
 	while(i<=n && val!=temp[i])++i;
 	if(i<=n)++c,++j;
  }
 }

 if(c==n-1)cout<<b[a[2]];
 else cout<<"-1";

 tr;



 }
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
