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
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outpt.txt","w",stdout);
#endif
    io;

int first=1;
for(int i=1;i<=2001003;i++)
{
	if(i==(first*(first+1))/2)a[i]=first,first++;
	
}

int pre=-1;
int pre1=-1;
int flag=0;
int val=0;
for(int i=2001004;i>=1;i--)
{
	if(a[i]!=0){flag=1;val=a[i];continue;}
	if(flag==1)a[i]=a[i+1]+1;
	else a[i]=val;
	
	
	flag=0;
}


// for(int i=1;i<=15;i++)cout<<a[i]<<" ";
// 	tr;

    int t;cin>>t;
    while (t--)
    {
      
   int n;cin>>n;
cout<<a[n];
tr;



    }
 
 }