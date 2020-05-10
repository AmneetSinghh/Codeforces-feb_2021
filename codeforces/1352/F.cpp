#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(b==0)
		{
			if(a)
			{
				for(int i=1;i<=a+1;i++)cout<<"0";
				
			}
			else
			{
				for(int i=1;i<=c+1;i++)cout<<"1";
			}
		}
		else if(b==1)
		{
			for(int i=1;i<=a+1;i++)cout<<"0";
			for(int i=1;i<=c+1;i++)cout<<"1";
		}
		else
		{
			for(int i=1;i<=a+1;i++)cout<<"0";// if zero 1 zero, if 2 then 3 zeros,
			// main game;
			int len_b=0;
			if(b%2==0)
			len_b=b-1;
			else
			len_b=b;
			//chekc hwo may b
			for(int i=1;i<=len_b/2;i++)
			cout<<"10";
			
			for(int i=1;i<=c+1;i++)cout<<"1";
			if(b%2==0)
			cout<<"0";
			
			
		
			
		}
		cout<<endl;
	
	}
}
