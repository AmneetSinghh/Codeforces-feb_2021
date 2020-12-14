#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
 

 
int s[150010]={0};
int h[150010]={0};
int32_t main() {
    io;
   int t=1;
    while (t--){
      int n;cin>>n;
      int a[n+1],val;

       F(i,n)cin>>val,h[val]++;
       for(int i=1;i<=150000;i++){
        int val=h[i];
              if(i-1>=1)
              {
               if(!s[i-1] && val>=1)s[i-1]=1,--val;

              }
              if(!s[i] && val>=1)--val,s[i]=1;
              if(!s[i+1] && val>=1)--val,s[i+1]=1;

       }
int c=0;

    for(int i=0;i<=150002;i++)if(s[i]==1)c++;
    
    cout<<c;
    tr;


      }
  
 
    }  
