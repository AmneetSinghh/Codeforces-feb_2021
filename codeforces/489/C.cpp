//// Journey of Harry Singh from Diploma in Cse to Red Coder of India.///////////////////////////////////////////////////
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	int m,s;cin>>m>>s;
	string r="";
	int dd=s;
	if(m<=1 && s==0)
	cout<<"0 0\n";
	else if(s==0  && m>1)
	cout<<"-1 -1\n";
	else if(m*9<s)
	cout<<"-1 -1\n";
	else
	{
		// this is the largest
		
		
		for(int i=1;i<=m;i++)
		{
		int v=9-(9-s);
		string d=to_string(v);
		
		if(9-s<=0){
		r+="9";
		s-=9;}
		else if((9-s)>=1){
		r+=d;
		s=0;}
		else if(s==0)
		r+="0";
		}

		// this is the smallest
		s=dd;
		string d="";
		int sum=0;
		for(int i=1;i<=m;i++)
		{
			int ind=0;
			if(s==0)
			d+="0";
			else
			{
				if(i==1)
				{
					for(int j=1;j<=9;j++)
					{
					int n=m-i;
					if((j+(n*9))>=s){
					ind=j;s-=j;break;}
					}
				}
				else
				{
					for(int j=0;j<=9;j++)
					{
					int n=m-i;
					if((j+(n*9))>=s){
					ind=j;s-=j;break;}
					}
				}
				
				d=d+to_string(ind);
			}
			
		}
		cout<<d<<" "<<r<<"\n";
		
	}
	
}
