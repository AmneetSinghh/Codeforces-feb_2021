/*Code by : Harry_Singh*/
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define FF(a,b) for(int i=a;i<=b;i++)
#define lc(i) (i-'0'-49)
#define uc(i) (i-'0'-17)
#define INF 1000000000009
#define c_b(i) __builtin_popcount(i)
#define MAXX 100005
#define mod 1000000009
using namespace std;
//****************************************INITILIZE GRAPHS***************************/
vector<int> graph[MAXX];
vector<ipair> graph_p[MAXX];
vector<ipair> op;
vector<int> vis(MAXX, 0);

/************************************************  pow(2,n)%mod *******************************/
int power(int x, int y)  
{  
    int res = 1;     // Initialize result  
    x = x % mod; // Update x if it is more than or  
    if (x == 0) return 0; // In case x is divisible by p; 
    while (y > 0)  
    {  
        if (y & 1)  
            res = ((res%mod)*(x%mod)) % mod;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = ((x%mod)*(x%mod)) % mod;  
    }  
    return res;  
}  

/************************************************  INIT GRAPH *******************************/
void init_graph(int n,int m)
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		graph[a].pb(b);
		graph[b].pb(a);
	}
}
/************************************************  INIT SEIVE *******************************/


void sieve(int n) 
{  
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }
    // just add the primes in some vector

} 

int fun(char ch)
{
	if(ch=='G')return 1;
	else if(ch=='.')return 0;
	else return 2;
}
void we_have_choices()
{

int n,m,good=0;
char ch;
cin>>n>>m;
char c[n+1][m+1] ;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cin>>c[i][j];
if(c[i][j]=='G')good++;
}}

int f=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
	char ch=c[i][j];

	if(ch=='B')
	{
		if(j+1<m)
		{
			int ff=fun(c[i][j+1]);
			if(ff==1){f=1;break;}
			else if(ff==0)c[i][j+1]='#';
		}
		if(j-1>=0)
		{
			int ff=fun(c[i][j-1]);
			if(ff==1){f=1;break;}
			else if(ff==0)c[i][j-1]='#';
		}
		if(i+1<n)
		{
			int ff=fun(c[i+1][j]);
			if(ff==1){f=1;break;}
			else if(ff==0)c[i+1][j]='#';
		}
		if(i-1>=0)
		{
			int ff=fun(c[i-1][j]);
			if(ff==1){f=1;break;}
			else if(ff==0)c[i-1][j]='#';
		}

	}


}
if(f==1)break;
}

if(f==1)
cout<<"No\n";
else
{
	// now time to check whether Good perosns can escape or not abby

	if(good==0  && (c[n-1][m-1]=='#' || c[n-1][m-1]=='.'))
		cout<<"Yes\n";
	else
	{
		// start from (n,m)
		int flag=0;
		queue<ipair> q;
		bool vis[n+1][m+1];
		f(i,n)f(j,m)vis[i][j]=false;
		if(c[n-1][m-1]=='B' || c[n-1][m-1]=='#')flag=1;

		if(flag==0)
		{
			int g=0;
			vis[n-1][m-1]=true;
			q.push({n-1,m-1});
			if(c[n-1][m-1]=='G')g++;

		while(!q.empty())
			{
			auto u=q.front();
			q.pop();
			auto i=u.first;
			auto j=u.second;
			if(i-1>=0)
			{
				if(vis[i-1][j]==false){
				 char ch=c[i-1][j];
				 if(ch=='G' || ch=='.')
				 {
				 	if(ch=='G')g++;
				 	vis[i-1][j]=true;
				 	q.push({i-1,j});
				 }}
			}
			if(j-1>=0)
			{
				if(vis[i][j-1]==false){
				 char ch=c[i][j-1];
				 if(ch=='G' || ch=='.')
				 {
				 	if(ch=='G')g++;
				 	vis[i][j-1]=true;
				 	q.push({i,j-1});
				 }}
			}
			if(j+1<m)
			{
				if(vis[i][j+1]==false){
				 char ch=c[i][j+1];
				 if(ch=='G' || ch=='.')
				 {
				 	if(ch=='G')g++;
				 	vis[i][j+1]=true;
				 	q.push({i,j+1});
				 }}
			}
			if(i+1<n)
			{
				if(vis[i+1][j]==false){
				 char ch=c[i+1][j];
				 if(ch=='G' || ch=='.')
				 {
				 	if(ch=='G')g++;
				 	vis[i+1][j]=true;
				 	q.push({i+1,j});
				 }}
			}
			






			}



			if(g==good)
				cout<<"Yes\n";
			else cout<<"No\n";
		}

		else 
		cout<<"No\n";










	}


}


}








int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	io;
	int t;
    cin >> t;
    while (t--)
        we_have_choices();
    return 0;

}