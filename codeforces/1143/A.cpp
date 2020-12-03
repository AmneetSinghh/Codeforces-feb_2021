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
const int maxn=1000005;
const int N = 2e5 + 5;
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("big.txt","w",stdout);
#endif
    io;
   int t=1;
    while (t--)
    {
       int n;cin>>n;
       int flag=0;
       map<int,int> h;
       int a[n+1];
       F(i,n)cin>>a[i],h[a[i]]++;
       for(int i=1;i<=n;i++)
       {
          h[a[i]]--;
          if(h[a[i]]==0){flag=i;break;}
       }





      cout<<flag;
      tr;
    
    }  
 }