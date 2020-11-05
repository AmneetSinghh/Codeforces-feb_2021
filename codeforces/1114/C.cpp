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
#define int unsigned long long
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
#define inf 1000000000000000009
using namespace std;

void convert10tob(int N, int b)
{
     if (N == 0)
        return;
     int x = N % b;
     N /= b;
     if (x < 0)
        N += 1; 
     convert10tob(N, b);
     cout<< ((x < 0) ? x + (b * -1) : x);
     return;
}
map<int,int> v;
void Primefactors(int b)
{
for(int i=2;i*i<=b;i++)
{
  if(b%i)continue;
  int cnt=0;
  while(b%i==0){b/=i,cnt++;}
  v[i]=cnt;
}
if(b>1)v[b]=1;
}



void Not_Stable()
{

int n,b;
cin>>n>>b;
Primefactors(b);
int mi=inf;
for(auto c:v)
{

	int val=c.first;
	int count=0; 
  int temp=n;
	while(temp)
	{
		temp/=val;
		count+=temp;
	}
   
   mi=min(mi,count/c.second);
}

cout<<mi;
tr;


}

int32_t main()
{     
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("op.txt","w",stdout);
#endif

 int g=1;
 F(i,g)  Not_Stable();
  
    return 0;
}