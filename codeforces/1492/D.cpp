/* not_stable but Believer */
/*Codeforces Round #701 (Div. 2) */
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
	int a,b,k;
	cin>>a>>b>>k;
	if((a==0 && k>0) || (b==1 && k>0)){cout<<"No\n";return;}
	if((a>0 && b>1) && k>(a+b-2)){cout<<"No\n";return;}
	string r="",ra="";
	F(i,b)r+='1',ra+='1';
	F(i,a)r+='0',ra+='0';
	int pos=b-1;
	int n=a+b;
	while(k>0 && pos+1<n)pos++,--k;
	swap(r[b-1],r[pos]);
	pos=b-2;
	while(k>0){
		swap(r[pos],r[pos+1]);
		--pos,--k;
	}
	cout<<"Yes";tr;
	cout<<ra;tr;
	cout<<r;tr;


} 
 
 
 
 
 
 
 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}