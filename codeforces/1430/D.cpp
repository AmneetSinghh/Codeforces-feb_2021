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
 
int n;
int gap(int a,int b,int c)
{
 
   for(int i=0;i<=500;i++)
   {
   	for(int j=0;j<=500;j++)
   	{
        int val=a*i+b*j;
        int ans=n-val;
        if(ans<c)continue;
        if(ans%c==0)
        {
        	int ff,ss,cc;
             if(a==3)ff=i;
             if(b==3)ff=j;
             if(c==3)ff=ans/c;
             if(a==5)ss=i;
             if(b==5)ss=j;
             if(c==5)ss=ans/c;
             if(a==7)cc=i;
             if(b==7)cc=j;
             if(c==7)cc=ans/c;
 
             cout<<ff<<" "<<ss<<" "<<cc;tr;
             return true;
        }
   	}
   }
   return false;
}
 
void Not_Stable() {
int n;
cin>>n;
string s;cin>>s;
std::vector<int> v;
int c=1;
if(s.size()==1){cout<<"1";tr;return;}
for(int i=0;i<s.size()-1;i++)
{
    if(s[i]==s[i+1])++c;
    else
    {
    	v.pb(c);
    	c=1;
    }
}
if(c>1)v.pb(c);
else if(s[n-1]!=s[n-2])v.pb(1ll);
 
 
std::vector<int> last;
 
for(int i=0;i<v.size();i++)
	if(v[i]>1)last.pb(i);
 
int l=0;
int days=0;
if(last.size()==0){cout<<(v.size()+1)/2;tr;return;}
 
for(int i=0;i<v.size();i++)
{
   if(v[i]>1)++days;
   else
   {
   	if(l>=last.size())
   	{
       ++i;
       days++;
   	}
   	else
   	{
   	int an=v[last[l]];
    if(an>1)
    {
    	v[last[l]]--;
    	++days;
    	if(v[last[l]]<=1)++l;
    }
    else
    {
       ++i;
       days++;
    }
   	}
    
   }
   if(l<last.size() && i>=last[l])++l;// l=1;
}
 
cout<<days;
tr;
 
 
 
 
 
}
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif         
    io;///100000// zeros
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}