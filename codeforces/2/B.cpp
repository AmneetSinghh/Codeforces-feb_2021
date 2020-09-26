/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/
 
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb insert
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
using namespace std;
#define tr cout<<"\n" 
#define br break
#define inf 100005
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
const int N = 1e3 + 5;
const int OO = 1e5;
 
int dp[2][N][N] , grid[2][N][N];
void Waheguru()
{
  int zi , zj;
    bool haveZero = false;
    int n;cin>>n;
   f(i,n)f(j,n)
        {
            int x;cin>>x;
            if(x == 0)  grid[0][i][j] = grid[1][i][j] = OO , haveZero = true , zi = i , zj = j;
            else
            {
                while(x % 2 == 0)   grid[0][i][j]++ , x /= 2;
                while(x % 5 == 0)   grid[1][i][j]++ , x /= 5;
            }
        }
  f(k,2)f(i,N-3)f(j,N-3)dp[k][i][j]=1e9;
    // f(i,n) dp[0][i][n] = dp[0][n][i] = dp[1][i][n] = dp[1][n][i] = 1e9;
 
    for(int i = n-1 ; i >= 0 ; i--)
        for(int j = n-1 ; j >= 0 ; j--)
            dp[0][i][j] = grid[0][i][j] + (i == n-1 && j == n-1 ? 0 : min(dp[0][i+1][j] , dp[0][i][j+1])),
            dp[1][i][j] = grid[1][i][j] + (i == n-1 && j == n-1 ? 0 : min(dp[1][i+1][j] , dp[1][i][j+1]));
 
    int ans , k;
    if(dp[0][0][0] < dp[1][0][0])   ans = dp[0][0][0] , k = 0;
    else                            ans = dp[1][0][0] , k = 1;
 
    if(haveZero && ans > 0)
    {
       cout<<"1\n";
 
        int i = 0 , j = 0;
        while(i < zi) putchar('D') , i++;
        while(j < zj) putchar('R') , j++;
        while(i < n - 1) putchar('D') , i++;
        while(j < n - 1) putchar('R') , j++;

return;    }
 
   cout<<ans;
   tr;
 
    int i = 0 , j = 0;
    while(i != n-1 || j != n-1)
    {
        if(i < n-1 && dp[k][i][j] == grid[k][i][j] + dp[k][i+1][j])
            putchar('D') , i++;
        else if(j < n-1)
            putchar('R') , j++;
    }
    printf("\n");
}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}