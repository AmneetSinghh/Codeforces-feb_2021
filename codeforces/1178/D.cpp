#include<bits/stdc++.h>
# define rep (i , n ) for ( int ( i )=0;( i ) <( n );( i )++)

using namespace std;
typedef long long  ll;
ll mod=1000000007;
const int maxn=100005;

ll power(ll x, ll  y)  {  ll res = 1;x = x % mod;y=y%mod;while (y > 0){if (y & 1)  res = ((res%mod)*(x%mod)) % mod;  y = y>>1;x = ((x%mod)*(x%mod)) % mod;  }  return res%mod;}  
// ll l[3000][3000],r[3000][3000],u[3000][3000],d[3000][3000],A[3000][3000];


int main ()
{
int a[2000]={0};int n;
set<int> prime;
for(int i=2;i<=1888;i++)
{
	if(a[i]==0)prime.insert(i);if(a[i]==1)continue;
	for(int j=i;j<=1888;j+=i)a[j]++;
}
cin>>n;
vector<pair<int,int>> ed;
for(int i=1;i<=n;i++)
{
	if(i==n)ed.push_back({i,1});else ed.push_back({i,i+1});
}
if(prime.find(ed.size())!=prime.end())
{
	cout<<ed.size()<<endl;
	for(auto sd:ed)
	cout<<sd.first<<" "<<sd.second<<endl;
}
else
{
	int fin=0;
for(auto sd:prime)
{
	if(sd>n){
	fin=sd;break;}
}
	
	int diff=fin-n;
	for(int i=1;i<=n;i++)
	{
		if(diff==0)break;
		ed.push_back({i,i+(n/2)});
		--diff;
	}
	
	cout<<ed.size()<<endl;
	for(auto sd:ed)
	cout<<sd.first<<" "<<sd.second<<endl;
	
}


}
