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
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
int inf=1e17;


void Waheguru()
{
int n,k;
cin>>n>>k;
int x[n+1],y[n+1];
vector<int> vc;
F(i,n)cin>>x[i],vc.pb(x[i]);
F(i,n)cin>>y[i];
sort(vc.begin(),vc.end());
int dp[n+1]={0};
int pre[n+3]={0};
for(int i=0;i<n;i++)
{

    int lo=lower_bound(vc.begin(),vc.end(),vc[i]+k+1)-vc.begin();
     --lo;
    // cout<<i<<" "<<vc[i]<<" "<<lo<<" "<<lo-i;
    // tr;
    dp[i]=lo-i+1;
}
for(int i=n;i>=0;i--)
pre[i]=max(pre[i+1],dp[i]);
int mx=0;

for(int i=0;i<n;i++)
{
   int ans=dp[i];
   ans+=(pre[i+dp[i]]);
   mx=max(ans,mx);
}
cout<<mx;
tr;
// for(auto sd:vc)cout<<sd<<" ";
//   tr;
// f(i,n)cout<<dp[i]<<" ";
// tr;




}


 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Waheguru();
    return 0;
}