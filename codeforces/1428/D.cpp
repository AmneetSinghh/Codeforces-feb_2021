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
// #define sz(b) b.size()
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
 

void Not_Stable() {
int n;
cin>>n;
int a[n+1];
std::vector<int> pos,pos1;
int row[n+1]={0},col[n+1]={0};
std::vector<ipair> res;
F(i,n)
{
	cin>>a[i];
	if(a[i]==1)pos.pb(i),pos1.pb(i);//index of the one;or we can say column
	if(a[i]==2 || a[i]==3)pos1.pb(i);
}
int down=1;
int k=0,j=0;

for(int i=1;i<=n;i++)
{
  // increment the current positions;
  if(k<pos1.size() && pos1[k]<=i)++k;
  if(j<pos.size() && pos[j]<=i)++j;

  // cout<<k<<" this updatino -> "<<j<<" "<<i<<" "<<a[i]<<" "<<col[i];
  // tr;

  if(a[i]==1)
  {
  	 if(!col[i])
  	 {
  	 if(down>n){cout<<"-1";tr;return;}
  	 col[i]++;
     res.pb({down,i});
     ++down;
     }
  }
  else if(a[i]==2)
  {
   // it will used the one;
  	if(col[i]==2)goto kr;
  	col[i]++;
  	 if(down>n){cout<<"-1";tr;return;}
  	res.pb({down,i});
  	// cout<<down<<" "<<i<<" ";tr;
  	// find the one's position
  	kr:
  	if(j>=pos.size()){cout<<"-1";tr;return;}
  	// this means it has one.;
  	res.pb({down,pos[j]});
  	// cout<<down<<" "<<pos[j]<<" ";tr;
  	col[pos[j]]++;
  	++j;
  	down++;
  }
  else if(a[i]==3)
  {
    // used the latest 2 or one or 3 any thing you can;


    if(col[i]==2)goto mr;
    col[i]++;
      if(down>n){cout<<"-1";tr;return;}
  	res.pb({down,i});
  	// cout<<down<<" "<<i<<" ";tr;
  	mr: 
  	if(k>=pos1.size()){cout<<"-1";tr;return;}// any 3 or 2
  	while(k<pos1.size() && col[pos1[k]]>0){++k;}
  	if(k>=pos1.size()){cout<<"-1";tr;return;}// any 3 or 2
  	res.pb({down,pos1[k]});
  	// cout<<down<<" "<<pos1[k]<<" ";tr;
  	  if(down+1>n){cout<<"-1";tr;return;}
  	res.pb({down+1,pos1[k]});
  	// cout<<down+1<<" "<<pos1[k]<<" ";tr;
  	if(a[pos1[k]]==2 || a[pos1[k]]==3 )++down;
  	else down+=2;
  	col[pos1[k]]+=2,++k;
  }
  else {}



}



cout<<res.size();tr;
for(auto sd:res)cout<<sd.first<<" "<<sd.second<<"\n";

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