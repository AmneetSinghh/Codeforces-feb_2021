#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int n,m;
	int i,t;
	int l=-1,r;
	cin>>n>>m>>s;
	int flag=0;
	
	n--;
	m--;
	int count=0;
	if (m > n/2) 
	m = n-m;// we use only one side dude bro
	for (i=0; i<=n/2; i++)
		if (s[i] != s[n-i]) {
			t=abs(s[i] - s[n-i]);
			count+=min(t, 26-t);
			if (l<0) 
         	flag=1,l=i;
			else 
			flag=2,r=i;
		}
		
		if(flag==0)
		cout<<"0\n";
		else if(flag==1)
		{
							count+= min(abs(m-l), abs(m-r));
								cout<<count<<endl;
		}
		else
		{
			count+= min(abs(m-l), abs(m-r));			
	count+=(r-l);
	cout<<count<<endl;

		}

}















