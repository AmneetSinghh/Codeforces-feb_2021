// by harry singh
/* ********************************NOTES*****************************





*/
#include<bits/stdc++.h>
using namespace std;


int main(){
		int n;cin>>n;
		string s;cin>>s;
		int hash[14]={0};
		for(int i=0;i<s.length();i++)
		{
			int th=s[i]-'0';
			if(th==0 || th==1)continue;//976
			if(th==7 || th==5 || th==3){hash[th]+=1;continue;}
			else if(th==9){hash[3]+=2;hash[2]+=1;hash[7]+=1;continue;}
			else if(th==8){hash[2]+=3;hash[7]+=1;continue;}
			else if(th==6){hash[3]+=1;hash[5]+=1;continue;}
			else if(th==4){hash[2]+=2;hash[3]+=1;continue;}
			else if(th==2){hash[2]++;continue;}
			
		}
		
		

		for(int i=7;i>=2;i--)
				for(int j=1;j<=hash[i];j++)
				cout<<i;
				
		cout<<endl;
		
	
}
