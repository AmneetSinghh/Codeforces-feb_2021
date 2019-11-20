#include <bits/stdc++.h>
#define ll long long
#define maxn 100100
using namespace std;
int main()
{
int n;cin>>n;
int a[n+1], b[n+1], sum=0;
ll mi=100000000007;
for(int i=1;i<=n;i++){
	cin>>a[i];
	if(a[i])
	sum+=a[i];
}
if(sum<2)cout<<"-1\n";else
{
	for(int i=2;i<=sum;i++)//make the equal segments of the one baby
	{  
		if(sum%i==0)
		{
			ll ans=0;int cnt=0;
			// loop to n count all the one's by jsut making into anohter array
			for(int s=1;s<=n;s++)
			{
				if(!a[s])continue;
				b[++cnt]=s;
				//cout<<i<<" "<<endl;
				if(cnt==i)
				{
				// just mid is hte answer minus by mid bro
				for(int l=1;l<=cnt;l++)
				{
					ans+=(ll)(abs)(b[l]-b[(1+cnt)/2]);
				}
				cnt=0;
				}
			}
			
			mi=min(ans,mi);
		}
	}
	cout<<mi<<endl;}}
