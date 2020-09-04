/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/
#include<bits/stdc++.h>
#define int long long
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
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
const int INF = 1e17;
 
// struct cmp {
//     bool operator() (const ipair& lhs, const ipair& rhs) const{
//         if(lhs.first < rhs.first) return true;
//         return false;
//     }
// };
 
void Waheguru()
{
	int n;
	cin>>n;
	int a[n+1];
	F(i,n)cin>>a[i];
	int dp[n+1]={0};
    set<ipair> vc;
	for(int i=n;i>=1;i--)
	{
       if(vc.size()==0)vc.insert({a[i],i}),dp[i]=-1;
       else
       {
         ipair sdd=*vc.begin();
         if(a[i]<sdd.first)dp[i]=-1,vc.insert({a[i],i});
         else
         {
         ipair p={a[i],0};
         auto tom=vc.lower_bound(p);
         auto val=prev(tom);
         auto ind=(*val).second;
         if(vc.size()==1 && (*val).first==a[i]){dp[i]=-1;continue;}
 
         if(ind>=0 && ind<=n)
         dp[i]=ind-i-1;
         else dp[i]=-1;
 
         }
 
       }
	}
 
 
	F(i,n)cout<<dp[i]<<" ";
 
}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}