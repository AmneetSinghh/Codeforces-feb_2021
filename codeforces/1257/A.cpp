// same thing for thiud code. rb o

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x,a,b;
		cin>>n>>x>>a>>b;
		int ans=0;
		 int tt=min(a,b);
		int  dd=max(a,b);
		 a=tt;
		 b=dd;

	    	int left=0;
	    	if(x+b==n)
	    	ans=abs(a-n);
	    	else if(x+b>n)
	    	{
	    	ans=abs(a-n);
	    	left=abs((x+b)-n);
	    	
	    		
	    	}
	    	else
	    	ans=abs(a-(x+b));
	    	
	    	if(left>0)
	    	{
	    		if((a-left)<=1)
	    		{
	    			ans=abs(1-n);
	    		}
	    		else 
	    			ans=abs(abs(a-left)-n);
	    		
	    	}
	    
	    cout<<ans<<endl;
		
	}
	
}

