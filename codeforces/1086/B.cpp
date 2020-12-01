/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
#define print(s) cout<<s;
const int N = 2e5 + 5;

int mi=inf;
const int maxn=1007;
int mp[maxn][maxn];
void check(int x1,int y1,int x2,int y2)
{
	 if(y1<=y2) 
	 {
	 for(int i=y1;i<=y2;i++) mp[x1][i]=1;

	 }
    else 
    {

    	for(int i=y2;i<=y1;i++) mp[x1][i]=1;
    }
   
    if(x1<=x2)
    	{
    		for(int i=x1;i<=x2;i++) mp[i][y2]=1;
    	}
    else 
    {
     for(int i=x2;i<=x1;++i) mp[i][y2]=1;
    }
}

// distance from a to b is clear baby;


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outpt.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {
       


       int n;
       double k;
       cin>>n>>k;
       int vis[n+1]={0};
       for(int i=1;i<=n-1;i++)
       {
       	int x,y;
       	cin>>x>>y;
       	vis[x]++;
       	vis[y]++;

       }
// leaves;

       int c=0;
F(i,n)if(vis[i]==1)c++;

double val=(k/c)*2.0;
cout<<fixed<<setprecision(20)<<val;
tr;


 }
 }