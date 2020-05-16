// by harry singh
/* ********************************NOTES*****************************





*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
		int n,a,b;cin>>n;
				deque<int> first,second;
		cin>>a;
		for(int i=1;i<=a;i++){int aa;cin>>aa;
		first.push_back(aa);}
		
			cin>>b;
		for(int i=1;i<=b;i++){int aa;cin>>aa;
		second.push_back(aa);}
		
	
		int count=0;
		int f=0;
		while(first.empty()==false && second.empty()==false)
		{
			if(second.front()>first.front())
			{
				second.push_back(first.front());
				second.push_back(second.front());
				first.pop_front();second.pop_front();

			}
			else
			{
				first.push_back(second.front());
				first.push_back(first.front());
				first.pop_front();second.pop_front();
			}
			
			++count;
			if(count>1000000){
			f=1;break;}
		}
		if(f==0)
		{
		cout<<count<<" "<<((first.empty())?2:1)<<endl;
	
		}
		else cout<<"-1\n";
		
	
}
