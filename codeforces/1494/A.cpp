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

string s;cin>>s;
int flag=0;
for(int i=0;i<=1;i++)
for(int j=0;j<=1;j++)
for(int k=0;k<=1;k++){
	string temp="";

	for(auto sd:s){
		if(sd=='A' && i==0)temp+='(';
		if(sd=='A' && i==1)temp+=')';
		if(sd=='B' && j==0)temp+='(';
		if(sd=='B' && j==1)temp+=')';
		if(sd=='C' && k==0)temp+='(';
		if(sd=='C' && k==1)temp+=')';
	}

    int tom=1,o=0;
	for(auto sd:temp){
		if(sd=='(')o++;
		else if(sd==')')--o;
		if(o<0){tom=0;break;}

	}
	if(o==0)flag=1;
}




if(flag==0)cout<<"NO";
else cout<<"YES";



tr;
}


 
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}