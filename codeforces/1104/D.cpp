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
bool ask(int x,int y){
	cout<<"? "<<x<<' '<<y<<endl;
	string a;
	cin>>a;
	assert(a!="e");
	return a=="x";
}

void Not_Stable()
{

	string s;cin>>s;
	while(s=="start"){
		int lo =2,hi=1e9;
		if(ask(0,1)){
			cout<<"! "<<1<<endl;
		}
		else{
			int st = 1,en=2;
			while(!ask(st,en)) {
				st=2*st,en=2*en;
				if(en>1e9) break;
			}
			lo = st+1,hi = en;
			while(lo<hi){
				int mid = (lo+hi)/2;
				if(ask(st,mid)) hi=mid;
				else lo = mid+1;
			}
			cout<<"! "<<lo<<endl;
		}
		cin>>s;
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