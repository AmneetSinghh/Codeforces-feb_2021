/* not_stable but Believer */
/* Codeforces Global Round 13_/28/02/2021 */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,char>
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

int n,u,l,d,r;
cin>>n>>u>>r>>d>>l;
int flag=0;
int U=u,L=l,R=r,D=d;
for(int j=1;j<=4;j++)
{
	l=L,u=U,r=R,d=D;
	if(j==1);// nothing;
	else if(j==2)--u,--l;
	else if(j==3)--d,--l;
	else --u,--d,l-=2;
	int u1=u,d1=d,r1=r,l1=l;
	for(int i=1;i<=4;i++){
		u=u1,d=d1,r=r1,l=l1;
		if(i==1){
			if(u<0 || d<0 || l<0 || r<0 ||  u>=n-1 || d>=n-1 || r>=n-1 || l>=n-1)continue;
			flag=1;break;// nothing on r;
		}else if(i==2){
			--r,--u;
			if(u<0 || d<0 || l<0 || r<0 ||  u>=n-1 || d>=n-1 || r>=n-1 || l>=n-1)continue;
			flag=1;break;

		}else if(i==3){
			--r,--d;
			if(u<0 || d<0 || l<0 || r<0 ||  u>=n-1 || d>=n-1 || r>=n-1 || l>=n-1)continue;
			flag=1;break;

		}else if(i==4){
			--u,--d,r-=2;
			if(u<0 || d<0 || l<0 || r<0 ||  u>=n-1 || d>=n-1 || r>=n-1 || l>=n-1)continue;
			flag=1;break;
		}

	}
	if(flag==1)break;
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