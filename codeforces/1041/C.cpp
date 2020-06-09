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
 
 


const int N = 200100;

set<int>q;
int ans[N], n, a[N], m, k;
void we_have_choices()
{

 
    cin >> n >> m >> k;
    map<int,int> v;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        q.insert(a[i]);
        v[a[i]]=i;
    }

    int cnt = 0;
    while(!q.empty()){
        ++cnt;
        int pos = v[*q.begin()];
        ans[pos] = cnt;
        q.erase(q.begin());
        while(true){
            auto it = q.lower_bound(a[pos]+1+k);
            if (it == q.end())
                break;
            pos = v[*it];
            q.erase(it);
            ans[pos] = cnt;
        }
    }
    cout << cnt << "\n";
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
 
}
 
 
 
 
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
#endif
	io;
	int t=1;
    // cin >> t;
    while (t--)
        we_have_choices();
    return 0;
 
}