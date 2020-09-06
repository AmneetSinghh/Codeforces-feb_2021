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
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
int inf=1e17;
string s,t;
int n,k;
const int MAXN = 207;
int dp[MAXN][MAXN][MAXN];

int solve(int i, int k, int zero) {
    if (i == n) return 0;
 
    int &ans = dp[i][k][zero];
    if (ans != -1) return ans;
 
    ans = solve(i+1, k, zero+(s[i]==t[0])) + (s[i]==t[1])*zero;
    if (k > 0) {
        if (t[0] != t[1]) {
            ans = max(ans, solve(i+1, k-1, zero+1));
            ans = max(ans, solve(i+1, k-1, zero)+zero);
        } else {
            ans = max(ans, solve(i+1, k-1, zero+1)+zero);// if you not understand this condition then just got for it, make a loop wth this condition
        }
    }
 
    return ans;
}
 
void Waheguru()
{
 cin>>n>>k;
 cin>>s>>t;
memset(dp, -1, sizeof dp);
cout << solve(0, k, 0) << "\n";
//3 stares- [cuurrent_index,operations,count];


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