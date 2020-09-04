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
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
const int INF = 1e17;
 
// struct cmp {
//     bool operator() (const ipair& lhs, const ipair& rhs) const{
//         if(lhs.first < rhs.first) return true;
//         return false;
//     }
// };
vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}
 
void Waheguru()
{
string s;cin>>s;
vector<int> Z=z_function(s);
int n = s.size();
int dp[n + 1]={0};
Z[0] = n;
f(i,n)dp[Z[i]]++;
for(int i=n-1;i>=0;i--)dp[i]+=dp[i+1];
vector <ipair> res;
// Main task of checking baby mere
f(i,n)if (Z[n-1-i]==i+1)res.pb({i+1,dp[i+1]});
cout<<res.size();
tr;
f(i,res.size())
cout << res[i].first << " " << res[i].second << "\n";
 
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