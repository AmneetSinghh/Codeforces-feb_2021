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
#define mod 1000000007
#define all(v) v.begin(),v.end()
// #define sz(b) b.size()
// #define maxn 1000010
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
3. BY dividing 2 numbers  by their GCD we can make both COPRIME- because we remove the common divisor by;
4. If i want to find the distance from each vertex to each vertex answe is :
   [ans=0; for(i to n): ans+nodes_in_subtree[i]*N-nodes_in_subtree[i]];
*/
const int maxn=300005;
void Not_Stable(){
   int n;
   cin>>n;
   set<int> s;
   vector<ipair> vc;
   for(int i=1;i<=n*2;i++)
   {
       char t;
       cin>>t;
       if(t=='+')vc.pb({1ll,1ll});
       else
       {
           int a;
           cin>>a;
           vc.pb({2ll,a});
       }
   }

    int dp[maxn]={0};
    int dp1[maxn]={0};
    int dp2[maxn]={0};
    for(int i=vc.size()-1;i>=0;i--)if(vc[i].first==2)dp[i]+=dp[i+1]+1;

    int cur=0;
    for(int i=0;i<vc.size();i++)
    {
        if(vc[i].first==1  && i==0)dp[i]+=1;
        if(vc[i].first==1 && i!=0)dp1[i]+=dp1[i-1]+1,dp2[i]=cur;
        if(vc[i].first==2)cur=vc[i].second;
    }

    int ans[maxn]={0};
    int j=1;
    for(int i=0;i<vc.size();i++)
    {
        if(vc[i].first==2)
        {
            if(i==0){cout<<"NO";return;}
            else if(dp2[i-1]==0)// only +ve before it;
            {
                int how=dp[i];// -ves
                int pre=0,j=i;
                for(j=i;j<how+i;j++)
                {
                    if(vc[j].second>pre)
                    {
                        if(s.size()>=1){
                        	auto it = prev(s.end());
                            ans[*it]=vc[j].second;
                            s.erase(it);}
                        else  {cout<<"NO";return;}
                    }
                    else {cout<<"NO";return;}
                    pre=vc[j].second;
                }
                i+=how;
                --i;

            }
            else if(dp2[i-1]!=0)
            {
            	
                int how=dp[i];// -ves
                int pre=0,cur=0;
                int pre_g=dp2[i-1];
                int many=dp1[i-1];
                for(int j=0+i;j<how+i;j++)
                {
                    if(vc[j].second>pre){ if(vc[j].second<pre_g)++cur;}
                    else{cout<<"NO";return;}
                    pre=vc[j].second;
                }
                if(cur>many){cout<<"NO";return;}
                for(int j=0+i;j<how+i;j++)
                {
                            if(s.size()>=1) {
                            auto it = prev(s.end());
                            ans[*it]=vc[j].second;
                            s.erase(it);
                            }
                            else{cout<<"NO";return;}
                        
                }
                  i+=how;
                --i;    
                }

            }
     
        else
        {
            s.insert(j);++j;
        }
        
    }


    cout<<"YES";
    tr;
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    tr;

}



int32_t main()
{
	#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif         
    io;///100000// zeros
    // SieveOfEratosthenes();
    int g=1;
    while (g--)Not_Stable();
    return 0;
}