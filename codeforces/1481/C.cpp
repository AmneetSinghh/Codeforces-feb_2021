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
	int n,m;
	cin>>n>>m;
	int a[maxn],b[maxn],t[maxn];
	F(i,n)cin>>a[i];
	F(i,n)cin>>b[i];
	F(i,m)cin>>t[i];
 
 
	int ans[maxn];
	std::vector<int> vc[maxn];
	int hash[maxn]={0};
	F(i,n){
		if(a[i]!=b[i])vc[b[i]].pb(i);
		hash[b[i]]=i;
	}
 
	if(!hash[t[m]]){cout<<"NO\n";return;}
    if(!vc[t[m]].empty()){
    	hash[t[m]]=vc[t[m]].back();
    	vc[t[m]].pop_back();
    }
     
 
 
     ans[m]=hash[t[m]];// if this is thier;
 
     F(i,m-1){
     	int val=t[i];
     	if(vc[val].empty()){
     		ans[i]=hash[t[m]];// change it last;
     		continue;
     	}
     	ans[i]=vc[val].back();
     	vc[val].pop_back();
     }
 
     int flag=0;
     F(i,n){
     	if(!vc[i].empty())flag=1;
     }
 
     if(flag==1)cout<<"NO\n";
     else {
     	cout<<"YES";
     	tr;for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
     	tr;
     }
 
 
}
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}