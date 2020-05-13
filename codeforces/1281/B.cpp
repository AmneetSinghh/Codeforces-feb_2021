#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string str1,str2;
	cin>>str1>>str2;
	int c;
	// we have to see what the smallest string we can make with this bro
	for(int i=0;i<str1.size();i++)
	{
		c=i;
		for(int j=str1.size()-1;j>i;j--)
		{
			if(str1[j]<str1[c])
			c=j;
		}
		if(c!=i)
		{
			swap(str1[c],str1[i]);
			break;
		}
	}
	if(str1<str2)
	cout<<str1<<endl;
	else cout<<"---"<<endl;
	}
}
