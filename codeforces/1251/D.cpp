#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e5+11;
ll n,s;
pair<int ,int > a[maxn];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		cin>>n>>s;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i].first>>a[i].second;
		}
		sort(a+1,a+1+n);
		ll l=1,r=1e15;
		ll ans=1;
		while(l<=r)
		{
		ll mid=(l+r)/2;
			int cnt=(n+1)/2;
			ll temp=0;
		  //  cout<<mid<<"  "<<cnt<<endl;
			for(int i=n;i>=1;i--)
			{
				if(a[i].second>=mid&&cnt)
				{
					temp+=max(a[i].first*1ll,mid);
					cnt--;
				//	cout<<"first-> "<<temp<<"  "<<cnt<<endl;
				}
				else
				{
					temp+=a[i].first;
				//	cout<<"second-> "<<temp<<"  "<<cnt<<endl;
				}
			}
			if(temp<=s&&cnt==0)
			l=mid+1,ans=mid;
			else r=mid-1;
			
			
		//	cout<<" l and r -> "<<l<<"  "<<r<<endl;
			
			
		}
		cout<<ans<<endl;
	}
	return 0;
}
