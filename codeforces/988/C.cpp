/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int MAXN=100004;
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {

int k,n,v,sum;
cin>>k;
map<int,int> dp,vin;
  int flag=0;
  std::vector<ipair> vc;

F(i,k)
{
  int n;
  cin>>n;
  set<int> s;
  map<int,int> to;
  sum=0;
     F(i,n)cin>>v,s.insert(v),sum+=v,to[v]=i;
     for(auto sd:s)
     {
         int ans=sum-sd;
         if(!dp[ans])dp[ans]=to[sd],vin[ans]=i;
         else if(flag==0)
         {
      flag=1;
      vc.pb({vin[ans],dp[ans]});
       vc.pb({i,to[sd]});

         }
     }

}


if(flag)
{
  cout<<"YES";tr;
  for(auto sd:vc)cout<<sd.first<<" "<<sd.second<<"\n";
    tr;
  continue;
}


cout<<"NO";
tr;










   }  
 }

