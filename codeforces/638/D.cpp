/* It's Practice time */
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
#define mod 1000000000000000000
#define inf 1000000000009
using namespace std;

//                  Make your segment tree library;// for all the basic operations;
/*
**Learnings** while solving 250:

1: s=a+b=(a^b)+(a&b)*2;
(a&b)=((a+b)-(a^b))/2;
*/

int a[105][105][105];
bool check(int x,int y,int z){
  /* Simple conditions */
  if(a[x-1][y][z] and a[x+1][y][z])return 1;
  if(a[x][y-1][z] and a[x][y+1][z])return 1;
  if(a[x][y][z-1] and a[x][y][z+1])return 1;
  /* Now these are the logical conditions */
  if(a[x][y-1][z] and a[x][y][z+1] and !a[x][y-1][z+1]) return 1;
  if(a[x][y+1][z] and a[x][y][z-1] and !a[x][y+1][z-1]) return 1;
  if(a[x-1][y][z] and a[x][y+1][z] and !a[x-1][y+1][z]) return 1;
  if(a[x+1][y][z] and a[x][y-1][z] and !a[x+1][y-1][z]) return 1;
  if(a[x-1][y][z] and a[x][y][z+1] and !a[x-1][y][z+1]) return 1;
  if(a[x+1][y][z] and a[x][y][z-1] and !a[x+1][y][z-1]) return 1;
  return 0;
}
void Not_Stable()
{
int n,m,k;cin>>n>>m>>k;
F(x,n)F(y,m)F(z,k){
char ch; cin>>ch;
 a[x][y][z]=ch-'0';
}
int ans=0;
F(x,n)F(y,m)F(z,k)if(a[x][y][z]==1 and check(x,y,z))ans++;


cout<<ans;tr;

}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}