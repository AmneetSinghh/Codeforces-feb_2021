#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define int long long
#define endl '\n'
#define maxn 500005

int32_t main(){
// int t;cin>>t;while(t--){
int n,k;
cin>>n>>k;
string s;cin>>s;


int r=1;
int hash[200]={0};
for(int i=0;i<s.length();i++)
{
	 int d = (int)s[i]-65;
	 hash[d]++;
}
int mi=1000007;
for(int i=0;i<k;i++)
mi=min(hash[i],mi);

cout<<(mi*k)<<"\n";


	
	
	
	
}
