#include <iostream>
using namespace std;
int main(){

	
	long long n,i,ans,len;
	char s[300005];
	cin>>n>>s;
	ans=n*(n-1)/2;
//	cout<<ans<<"  first ans -> "<<endl;
	len = 1;
	for(i=1;i<=n;i++)
	{
		if(s[i]==s[i-1])
		{
		len++;
	//	cout<<i<<"  lem  "<<len<<"   -> new ans"<<ans<<endl;
		//aaaba
		}else
		{
		//	cout<<i<<"  lem else   "<<len<<"   -> new ans"<<ans<<endl;
			ans-=len*2-1;
			if(i==len)
				ans+=len-1;
			if(i==n)
			{
				//cout<<"before end-> "<<ans<<endl;
					ans+=len;	//cout<<"after  end-> "<<ans<<endl;
			}
			
				//cout<<i<<"  lem  "<<len<<"   "<<ans<<endl;
			len=1;
			
			
		}
	}
		
	cout<<ans<<endl;
	
}
 
