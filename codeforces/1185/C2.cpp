#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define INF 1e15
int main()
{
ll n,m;cin>>n>>m;
ll t[n+1];
for(ll i=1;i<=n;i++)cin>>t[i];
int res[n+1]={0};
int hash[120]={0};
ll sum=0;
std::set<ll, std::greater<ll>> s;
for(int i=1;i<=n;i++)
{
	int count=0;
	sum+=t[i];
	if(sum>m)
	{
		ll res=sum;
	   for(auto sd:s)
	   {
	   	if((res-(sd*hash[sd]))>m){
	   	res-=(sd*hash[sd]);
	   	count+=hash[sd];}
	   	else
	   	{
	   		// we cant delete with all frequnces of current
	   		ll temp=res-(sd*hash[sd]);
	   		// add how many 20 check
	   		ll sec=m-temp;
	   		count+=  hash[sd]-(sec/sd);
	   		break;
	   	}}
	}
	res[i]=count;
	hash[t[i]]++;
	if(s.find(t[i])==s.end())
	s.insert(t[i]);
}
for(int i=1;i<=n;i++)
cout<<res[i]<<" ";
cout<<endl;
	
	
	
	
	
	
}
