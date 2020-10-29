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
const int maxn=10005;
int a[maxn];
int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
std::vector<int> d;
void count_div(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { 
            if (n / i == i)d.pb(i);

            else // Otherwise count both 
                d.pb(i),d.pb(n/i);
        }
    }
}
int dp[500005],sum[500005];
void Not_Stable()
{

int a,m;
cin>>a>>m;
count_div(m);
sort(all(d));
f(i,d.size())sum[i]=0;
		for(int i=d.size()-1;i>=0;i--){// greater divisors to the smallest divisor
			int res=d[i];
			int val=(a+m-1)/res;
			val-=(a-1)/res;
			val-=sum[i];
			dp[i]=val;// this is the final value;

			if(res==gcd(a,m))break;
			f(j,d.size()){if(res%d[j]==0)sum[j]+=dp[i];}
		}


		int res=gcd(a,m);
		f(i,d.size()){
			if(d[i]==res){
				cout<<dp[i]<<endl;
				break;
			}
		}


d.clear();



}

 
 
int32_t main()
{     
   cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit);
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}