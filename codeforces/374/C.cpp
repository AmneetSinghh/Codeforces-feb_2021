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
#define mod 1000000007
using namespace std;
//****************************************INITILIZE GRAPHS***************************/
vector<int> graph[MAXX];
vector<ipair> graph_p[MAXX];
// vector<ipair> op;
// vector<int> vis(MAXX, 0);
 
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

 ////////////////////////////****GCD////////////////////////
 int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);  } 
int mx(int a,int b){if(a<=b)return b;else return a;}

// this is the DFS which'll visit all the connectd components in a matrix baby.


int f[1010][1010],n,m,ans=0;
char a[1010][1010];
char to[26];
bool vis[1010][1010];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int dfs(int x,int y){
    if(f[x][y]!=0)return f[x][y];
    vis[x][y]=true;

    // visit all four directions
    for(int i=0;i<4;i++){
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(a[tx][ty]==to[a[x][y]-'A']){
        
            if(vis[tx][ty]){
                cout<<"Poor Inna!\n";
                exit(0);
            }
            f[x][y]=max(dfs(tx,ty),f[x][y]);
        }
    }
    
    vis[x][y]=false;
    if(a[x][y]=='A')f[x][y]++;
    return f[x][y];
}

/* Some HINTS*//*                     SOME VALUABLE  **HINTS**
1. We can use the binary_search in which by fixiing some n we can find the optimal solutions... specialluy for the div2 c and d problems binary serach works well
2. We can use the DFS or BFS for the problems specially for the matrixes or for char matrix where we have to visitd all and find answer then
3. Finding some elements in which we have to do searchng in each or one diretions or some talk about connecrted components DFS is used.
*/

void we_have_choices()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    to['D'-'A']='I';
    to['I'-'A']='M';
    to['M'-'A']='A';
    to['A'-'A']='D';
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]=='D')                
                ans=max(ans,dfs(i,j));
    
    if(ans==0)cout<<"Poor Dima!\n";
    else cout<<ans<<"\n";
    

}
 
 
 
 
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("in.txt","r",stdin);
 freopen("op5.txt","w",stdout);
#endif
    io;


    int t=1;
    // cin >> t;
    while (t--)
        we_have_choices();
    return 0;
 
}