// by harry singh
/* ********************************NOTES*****************************





*/
#include<bits/stdc++.h>
using namespace std;


int main(){
		int n;cin>>n;
		if(n%2==0)
		cout<<"-1\n";else
		{
			for(int i=0;i<n;i++)cout<<i<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)cout<<i<<" ";
		cout<<endl;
		
		
		for(int i=0;i<n;i++)
		cout<<((i*2)%n)<<" ";
		cout<<endl;
		}
		
		
	
}
