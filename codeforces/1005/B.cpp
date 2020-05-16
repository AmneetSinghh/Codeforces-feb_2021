// by harry singh
/* ********************************NOTES*****************************
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
		string s,t;cin>>s>>t;
		int f=0;
		int count=0;
		int i=s.length()-1;
		int j=t.length()-1;
		while(s[i]==t[j])
		{
			++count;
			if(i-1<0 || j-1<0)
			break;
						--i;--j;
			
		}
		
		int ans=(s.length()+t.length())-(count*2);
		cout<<ans<<endl;
		
		
		
}
