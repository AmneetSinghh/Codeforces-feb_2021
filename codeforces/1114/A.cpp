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



void Not_Stable()
{
   int x,y,z,a,b,c;
   cin>>x>>y>>z;
   cin>>a>>b>>c;

   int second=min(b,y);
   b-=second;
   y-=second;

   if(y)
   {
   	int temp=min(a,y);
   	a-=temp;
   	y-=temp;
   	if(y){cout<<"NO";return;}
   }


   int first=min(a,x);
   a-=first;
   x-=first;

   if(x){cout<<"NO";return;}

   if(a+b+c>=z){cout<<"YES";return;}
   cout<<"NO";



}

int32_t main()
{     
 // freopen("input.txt","r",stdin);
 // freopen("op.txt","w",stdout);

 int g=1;
 F(i,g)  Not_Stable();
  
    return 0;
}