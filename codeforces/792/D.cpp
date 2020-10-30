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
#define inf 1000000000000009
using namespace std;
const int maxn=200005;
// int a[maxn];
long long lowbit(long long x){return x&-x;}

void Not_Stable()
{
   int m,q;
   cin>>m>>q;
   F(j,q)
   {
   	int x;
   	string s;
   	cin>>x;
   	cin>>s;
   	for(int i=0;i<s.size();i++){
   		char val=s[i];
   		if(val=='L')x-=lowbit(x)>>1;
   		else if(val=='R')x+=lowbit(x)>>1;
   		else
   		{
   			int add=x+lowbit(x);
   			int sub=x-lowbit(x);
   			if(lowbit(add)/2==lowbit(x) && add<=m)x=add;
   			else if(lowbit(sub)/2==lowbit(x))x=sub;
   			else{}
   		}

   	}
   	cout<<x;
   	tr;
   }

}


 
 
int32_t main()
{     
   cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit);
    int g=1;
    while (g--)Not_Stable();
    return 0;
}