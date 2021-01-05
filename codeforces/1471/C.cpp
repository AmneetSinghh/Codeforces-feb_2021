/* Coding is love */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 100000000000009;
using namespace std;



int32_t main() 
{
    io;
  int g;cin>>g;
    while (g--){


    int n,m;
    cin>>n>>m;
    int k[n+1],c[m+1];
    vector<pair<int,int>> vc;
    F(i,n)cin>>k[i];
    F(i,m)cin>>c[i];
sort(k+1,k+1+n);
reverse(k+1,k+1+n);
int j=1;int sum=0;
F(i,n){
	if(k[i]>=j)sum+=c[j],++j;else sum+=c[k[i]];
}






    cout<<sum;tr;

}
}







