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
#define tr cout<<"\n"
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
 
 // vector<int> pr;
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
    // // just add the primes in some vector
    // for(int i=2;i<=n;i++)
    // if(prime[i])pr.pb(i);

}

 ////////////////////////////****GCD////////////////////////
 int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);  } 
// int mx(int a,int b){if(a<=b)return b;else return a;}

// this is the DFS which'll visit all the connectd components in a matrix baby.



int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int dp[1005][1005];

/********************************* IN SOME Problem think about the top down apraoch every recursion step just save the previous step';*/
int dfs(int x,int y)
{
    if(dp[x][y])return dp[x][y];
    // vsiited true
    // visit all four directions
    for(int i=0;i<4;i++){
        int tx=x+dx[i];
        int ty=y+dy[i];
        // now visit the dfs call the dfs
        // some operatoins on the dp[x][y]
    }
    
    // we are here after when we can't able to make any move,, we can do anytiung here we can return dp here

    return dp[x][y];
}

void reduce_to_zero()
{
    int range=100,add=0;
    int x=1;// x can be increasing by some vaalue
    while(range)
    {
     add+=min(range,x);
     x;// apply condiiton
     range-=min(x,range);// it will make to zero
    }
}
//****************IDEAS******************
/*
some of first n even numbers is n*n+1;
some of first n odd numbers is n*n;
*/

/* Some HINTS*//*                     SOME VALUABLE  **HINTS**
1. We can use the binary_search in which by fixiing some n we can find the optimal solutions... specialluy for the div2 c and d problems binary serach works well
2. We can use the DFS or BFS for the problems specially for the matrixes or for char matrix where we have to visitd all and find answer then
3. Finding some elements in which we have to do searchng in each or one diretions or some talk about connecrted components DFS is used.
4.XOR->  If the bits are same. then if i xor the first or second bit with 0 then the answer will be the same bit  0 1 = 0^1=1
but if bits are different i xor the first or second bit with 1 anwer will be same as second or first, if with zero, answer will be different.
*/
 

vector<ipair> vc;
bool comparison(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first>b.first && a.second<b.second)
    return true;
    auto to=abs(a.first-b.first);
    auto mm=abs(a.second-b.second);
    if(a.first>b.first)
    {if(to>mm)return true;else return false;}
    else if(a.second<b.second){
    if(to>mm)return false;else return true;}
    else return false;
}

void we_have_choices(){
int n,a,b;
cin>>n;
F(i,n){
cin>>a>>b;vc.pb({a,b});}
sort(vc.begin(),vc.end(),comparison);
int total=0;
for(int i=0;i<vc.size();i++)
    total+= (vc[i].first*i)+(vc[i].second*((n-i)-1));
cout<<total<<"\n";
}


int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;

    int t=1;
    // cin >> t;
    while (t--)
        we_have_choices();
    return 0;
 
}