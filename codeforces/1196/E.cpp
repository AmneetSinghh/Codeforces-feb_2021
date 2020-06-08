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



void now(int r,int c,int whites,int blakes)
{
	vector<ipair> white,black;
	int flag=0;
	while(true)
	{
    	if(flag==0)
    	{
    		if(blakes==0)break;
    		black.pb({r,c});--blakes;
    		if(blakes==0)break;
    		flag=1;
    		++r;
    	}
    	else
    	{
    	white.pb({r,c});--whites;
    	if(blakes==0)break;
         black.pb({r,c-1});--blakes;
         if(blakes==0)break;
         black.pb({r,c+1});--blakes;
         if(blakes==0)break;
         flag=0;++r;
    	}

	}
	// whites left baby
	 flag=0;
	 int count=0;
	for(auto c:black)
	{
		// cout<<c.first<<" "<<c.second<<"\n";
    	if(count<=0)
    	{
        if(whites==0)break;
        white.pb({c.first,c.second-1});--whites;
        if(whites==0)break;
        white.pb({c.first,c.second+1});--whites;
        if(whites==0)break;
    	count=2;
    	}
    	else 
    	--count;
	}


    // cout<<"B\n";
	for(auto sd:black)
		cout<<sd.first<<" "<<sd.second<<"\n";
	// cout<<"W\n";
	for(auto sd:white)
		cout<<sd.first<<" "<<sd.second<<"\n";


}
void we_have_choices()
{
int b,w,mx,mi;/// 3 8
cin>>b>>w;
mx=b,mi=w;
if(mx<mi)swap(mx,mi);
int make=(mi*4)-(mi-1);
if(mx>make)
	cout<<"NO\n";
else
{
	cout<<"YES\n";
	if(w<b) now(1,2,w,b);
	else now(1,3,b,w);


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