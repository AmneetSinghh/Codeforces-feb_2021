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
long long lowbit(long long x){return x&-x;}//that means if we have 10100 it will return 2^2=4;
 
int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
 
void Not_Stable()
{
    int n;
    cin >> n;
    vector <ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int minus=0;
    std::vector<int> left(n);
    left[0]=a[0];
    F(i,n-1)left[i]=min(left[i-1],a[i]);

    for (int now = n - 2; now > 0; now--)
    {
        if (a[now] <= a[now + 1]) continue;
        minus+=(a[now]- a[now + 1]);
        if(left[now]<minus){cout<<"No";tr;return;}
        
    }
    cout << "Yes";tr;
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