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


int check(int a,int b,int c1,int c2,int add,int sub)
{
    int t1=a,t2=b,ff=0,ss=0,fi=0,si=0;
	if(c1)fi=(c1+1)/2,t1+=(fi*add);
	if(c1%2==0)// even means again his turn;
	{
		if(c2)si=(c2+1)/2,t2+=(sub*si);
	}
	else
	{
		si=c2-((c2+1)/2);
		t2+=si*sub;
	}    
	
    if(t2==t1)return 0;
	if(t2<t1)
	{
       int v=abs(si-c2);
       if(v*9+t2>=t1)return 0;
       else return 1;// can't make;
	}
	else
	{
		int v=abs(fi-c1);
       if(v*9+t1>=t2)return 0;
       else return 1;// can't make;
	}
}


void Not_Stable() {
int n;
cin>>n;
string s;cin>>s;
string first="Monocarp",second="Bicarp";
int a=0,b=0;
int c1=0,c2=0;
for(int i=0;i<n;i++)
{
	if(i<n/2)
	{
        if(s[i]=='?')c1++;
		else a+=s[i]-'0';
	}
	else{
		if(s[i]=='?')c2++;
		else b+=s[i]-'0';
	}
}
// first person   optimal way 0000 9999 or 9999 0000
if(c1 || c2)
{
	int aa=0;// 1 1 0 9
	aa|=check(a,b,c1,c2,0,9);
	aa|=check(a,b,c1,c2,9,0);
	aa|=check(b,a,c2,c1,0,9);
	aa|=check(b,a,c2,c1,9,0);
	if(aa)cout<<first;
	else cout<<second;

}
else if(a==b)cout<<second;
else cout<<first;tr;


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
