#include <bits/stdc++.h>
using namespace std;
 #define push_back
#define int long long
#define endl '\n'
#define maxn 100010
const int MOD = 1000000007;
bool IsPowerOfTwo(int x)
{
    return (x != 0) && ((x & (x - 1)) == 0);
}
void solve() {
   
   	
  int n;cin>>n;
  int hash[3000]={0};
  int a[n+1];
  int mx=-1;
  for(int i=1;i<=n;i++){
  cin>>a[i];hash[a[i]]++; mx=max(a[i],mx);
  }
  
  int dm=0;
  for(int i=1;i<=1024;i++)
  {
  	int temp[3000]={0};
  	int f=0;
  	for(int j=1;j<=n;j++)
  	temp[(a[j]^i)]++;
  	
  	for(int m=0;m<=1024;m++){
  	if(temp[m]!=hash[m]){f=1;break;}}
  	
  	if(f==0){
  	cout<<i<<"\n";
  	dm=1;break;}
  }
  if(dm==0)
  cout<<"-1\n";
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}
