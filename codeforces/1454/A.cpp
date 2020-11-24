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
const int maxn=1005;

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
 
    int n;cin>>n;
    std::vector<int> vc;
    for(int i=n;i>=1;i--)vc.pb(i);


    if(n%2==1)
    {
           swap(vc[n/2],vc[0]);
           for(auto sd:vc)cout<<sd<<" ";

    }
    else
    {
      for(auto sd:vc)cout<<sd<<" ";
        
    }
  tr;


 
 
 }
 }