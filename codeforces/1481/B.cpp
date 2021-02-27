/* not_stable but Believer */
/* Practice_virtual_1_2021 */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000009
using namespace std;
const int maxn=100005;

void Not_Stable()
{
	
	int n,k;
	cin>>n>>k;
	int a[n+1];
	F(i,n)cin>>a[i];
    int last=-1;
    int i=1;
    int flag=0;
    while(i<=n-1)
    {
      if(a[i]<a[i+1]){
      	a[i]++;
      	--k;
      	if(k<=0){cout<<i;tr;flag=1;break;}
      	i=0;

      }
      ++i;

    }

    if(flag==0)cout<<"-1\n";



}
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}
    
