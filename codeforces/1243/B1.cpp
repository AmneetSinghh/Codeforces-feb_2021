#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
		
		int n;cin>>n;
		string s;
		cin>>s;
		string ss;
		cin>>ss;
		string te="",me="";
		if(s.length()!=ss.length())
		cout<<"No\n";
		else
		{
			for(int i=0;i<=n;i++)
			{
				if(s[i]!=ss[i]){
				te+=s[i];
				me+=ss[i];}
			}
			if(te.length()>2){
			cout<<"No\n";
			continue;}
			if(te[0]==te[1] && me[0]==me[1]){
			cout<<"Yes\n";
			continue;}
			cout<<"No\n";
			
			
			
			
		}
	}
	return 0;
}
