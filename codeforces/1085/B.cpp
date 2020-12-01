/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=100005;
#define print(s) cout<<s;
const int N = 2e5 + 5;
int a[2001006]={0};


int n,k;
int mi=inf;

void count_div()
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) 
        {
            int first=i;
            int second=n/i;
             int l=k*first;
             int r=k*(first+1);
             for(int j=l;j<=r;j++)
             {
             	if(j/k==first && j%k==second)mi=min(mi,j);
             }


              first=n/i;
             second=i;
             l=k*first;
             r=k*(first+1);
             for(int j=l;j<=r;j++)
             {
             	if(j/k==first && j%k==second)mi=min(mi,j);
             }
            
        }
    }
    cout<<mi;
    tr;
}
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outpt.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {
       
cin>>n>>k;
count_div();



    }
 }