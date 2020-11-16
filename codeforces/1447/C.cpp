// Time for the Linked-List



#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009

using namespace std;
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;


void Not_Stable()
{
  int n,w,a;
  cin>>n>>w;
  int l=(w+1)/2;
  int r=w;
  int flag=0;
  std::vector<ipair> v;
  std::vector<int> ans;
     F(i,n)
     {
      cin>>a;
      if(a>=l && a<=r)flag=i;
      if(a<l)v.pb({a,i});
     }
     sort(all(v));
     if(flag)cout<<"1\n"<<flag<<"\n";
     else
     {
      int sum=0;
      for(auto sd:v)
      {
         sum+=sd.first;
         ans.pb(sd.second);
         if(sum>=l && sum<=r){flag=1;break;}
      }
       sort(all(ans));
      if(!flag)cout<<"-1\n";
      else
      {
        cout<<ans.size(); tr;
        for(auto sd:ans)cout<<sd<<" ";
          tr;
      }
     }
}


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}