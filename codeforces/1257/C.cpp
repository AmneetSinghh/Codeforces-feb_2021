// same thing for thiud code. rb o

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
    int n;
    cin>>n;
    int mi=INT_MAX;
    	int dis[1000006]={0};
    	int hash[1000006]={0};
    	int value;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>value;
    		

    		if(!hash[value])
    		{
    		hash[value]++;
    		dis[value]=i;
    		}
    		else
    		{
    			mi=min(mi,(i-dis[value])+1);
    			dis[value]=i;
    			hash[value]++;
    		}
    		
    		
    		
    	}
    	if(mi==INT_MAX)
    	cout<<"-1\n";
    	else
    	cout<<mi<<endl;
    
    
    
	}
	
}

