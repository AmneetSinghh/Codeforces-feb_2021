#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
int string_is_the_power_But=0,AAA_AAA=0,sexa=0;
int32_t main() {
    io;
  int g;cin>>g;
    while (g--){
        
        int n;
        cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    int i=1,j=n;
    while(i<=j)
    {
        if(i<=j)cout<<a[i]<<" ";
        ++i;
        if(i<=j)cout<<a[j]<<" ";
        --j;
    }
    tr;
    
    
    
    
    
        


}
}