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

 
int32_t main() {

    io;
   int t=1;
    while (t--){
          int n;
          cin>>n;
          int a[n+1];int e=0,o=0;
          map<int,int> h;
          for(int i=1;i<=n;i++)
          {
                cin>>a[i];
               if(a[i]%2==1)++o;
                
          }
          
          
          cout<<min(o,n-o);
                 
         

     


 
    }  
 }