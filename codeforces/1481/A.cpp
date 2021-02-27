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
	
	int a,b;cin>>a>>b;
	string s;cin>>s;
	int h[100005]={0};
	for(auto sd:s)
	{
		if(sd=='L')h[0]++;
        if(sd=='R')h[1]++;
        if(sd=='U')h[2]++;
        if(sd=='D')h[3]++;
	}
	if(a>=0 && b>=0){
     if(h[1]>=a && h[2]>=b)cout<<"YES";
     else cout<<"NO";
	}
	else if(a<=0 && b<=0){
		if(h[0]>=abs(a) && h[3]>=abs(b))cout<<"YES";
		else cout<<"NO";
	}
	else if(a>=0 && b<=0){
		if(h[1]>=a && h[3]>=abs(b))cout<<"YES";
		else cout<<"NO";

	}
	else if(a<=0 && b>=0){
		if(h[0]>=abs(a) && h[2]>=abs(b))cout<<"YES";
		else cout<<"NO";

	}


	tr;


}
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}
    
