/* not_stable but Believer */
// div 3 round; code by not_stable;
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
int x;
cin>>x;
int flag=0;
for(int i=1;i<=10000;i++)
{
	int make=x-(i*i*i);
	int l=1;
	int r=100000;
	if(make<=0)break;
	int ans=0;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(mid*mid*mid<make)ans=mid,l=mid+1;
		else if(mid*mid*mid>make)r=mid-1;
		else {ans=mid;break;}
	}
	if(ans*ans*ans==make){flag=1;break;}
}



if(flag==1)cout<<"YES";
else cout<<"NO";
tr;


} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}