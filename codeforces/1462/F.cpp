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
  int g;
  cin>>g;
    while (g--){

int  n;cin>>n;
int a[n+1],b[n+1];
std::vector<int> L,R;
F(i,n){
  cin>>a[i]>>b[i];
  int l=a[i];
  int r=b[i];
  L.pb(l),R.pb(r);

}
sort(all(L));
sort(all(R));
int ans=inf;
F(i,n)
{
  int l=a[i];
  int r=b[i];
  int right=n-(lower_bound(all(L),r+1)-L.begin());
  int left=lower_bound(all(R),l)-R.begin();
  ans=min(right+left,ans);
}
cout<<ans;
tr;

   
   
    
    
    
        


}
}