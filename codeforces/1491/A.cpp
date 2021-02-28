/* not_stable but Believer */
/* Codeforces Global Round 13_/28/02/2021 */
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

int n,q;
cin>>n>>q;
int a[n+1],h[23]={0};
F(i,n)cin>>a[i],h[a[i]]++;
for(int i=1;i<=q;i++)
{
	int t,val;
	cin>>t>>val;
	if(t==2){
		if(val<=h[1])cout<<"1";
		else cout<<"0";
		tr;
	}
	else
	{
		if(a[val]==1)h[1]--,h[0]++,a[val]=0;
		else h[1]++,h[0]--,a[val]=1;
	}
}
}
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}