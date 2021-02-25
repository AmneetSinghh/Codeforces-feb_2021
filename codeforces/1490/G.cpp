/* not_stable but Believer */
// div 3 round; code by not_stable;
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
#define mod 998244353
#define inf 1000000000009
using namespace std;
const int maxn=100005;
int torrent(int x,vector<int> &a)
{
  int l=0,r=a.size()-1,mid,ans=-1;
  while(l<=r){
  	mid=(l+r)/2;
  	if(a[mid]<x)r=mid-1;// aur small
  	else ans=mid,l=mid+1;
  }
  return ans;
}

int torrent1(int till,int x,vector<int> &a)
{
  int l=0,r=a.size()-1,mid,ans=-1;
  while(l<=r){
  	mid=(l+r)/2;
  	if(till+a[mid]>=x)ans=mid,l=mid+1;
  	else r=mid-1;
  }
  return ans;
}
void Not_Stable()// min of all;
{

int n,m;cin>>n>>m;
int a[n+1],x[m+1];
F(i,n)cin>>a[i];
F(i,m)cin>>x[i];
// prefix sum maintain ;
int pre[n+1]={0};
int till[n+1];
vector<ipair> vc;
vector<int> vc1;
F(i,n)
{
 pre[i]=pre[i-1]+a[i];
 vc.pb({pre[i],i});
 vc1.pb(pre[i]);
}
sort(all(vc));sort(all(vc1));
reverse(all(vc));reverse(all(vc1));// i will use the binary search;
F(i,n)till[i]=n;
for(int i=0;i<vc.size();i++){
	if(i==0)till[i]=vc[i].second;
	else till[i]=min(vc[i].second,till[i-1]);// max<max1<max2;

}



int mx_val=vc1[0];
for(int i=1;i<=m;i++)
{
   int cur=x[i];
   if(mx_val>=cur){// max value of the prefix;
   	// no need of iterating round, just single round till n; find min by binary search
   	int ans=torrent(cur,vc1);
   	cout<<till[ans]-1<<" ";
   }else{
   	if(pre[n]<=0)
   	{
   		// infinity case;
   		cout<<"-1 ";
   		continue;
   	}
   	
   	int left=cur-mx_val;
   	int rem=left/pre[n];// total add in it;  3/2
   	if(left%pre[n])++rem;
   	int make=rem*pre[n];// this is the pre value;
   	int ans=torrent1(make,cur,vc1);
   	if(rem<=1)cout<<(n-1)+till[ans]<<" ";
   	else{
   		cout<<(n-1)+((rem-1)*n)+till[ans]<<" ";
   	}

   }

}




tr;




}
 
 
 
 
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}