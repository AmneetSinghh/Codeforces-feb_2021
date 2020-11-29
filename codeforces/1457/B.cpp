/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=100005;
#define print(s) cout<<s;
const int N = 2e5 + 5;
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
                  int n,k;cin>>n>>k;
                  int a[n+1];
                  F(i,n)cin>>a[i];
                  int mi=inf;
                  for(int i=1;i<=100;i++)
                  {
                    int j=1;
                    int cost=0;
                    while(j<=n)
                    {
                      if(a[j]!=i)
                      {
                          j+=k;
                          cost++;
                      }
                      else  ++j;
                    }
                    mi=min(cost,mi);
                  }





                  cout<<mi;
                  tr;

                  

    }
 
 }