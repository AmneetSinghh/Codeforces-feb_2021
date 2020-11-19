// Time for the Linked-List
 
 
 
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
 
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009
 
using namespace std;
const int maxn=100005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;

void Not_Stable()
{
 
 int n;
 cin>>n;
 int a[n+1];
    F(i,n)cin>>a[i];
    sort(a+1,a+1+n);
    int last=a[n];
    int first=a[1];
    int count=0;

    for(int i=2;i<=n-1;i++)
      count+=(last-a[i]);

if(first<=count)
{
	int temp=count-first;
	cout<<temp;

}
else 
{
	first-=count;
	if(first%(n-1)==0){cout<<"0";tr;return;}
    int temp=first%(n-1);
	cout<<(n-1)-temp;


}
tr;




}
 
 
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}