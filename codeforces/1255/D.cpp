#include <bits/stdc++.h>
#define maxn 100100
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			char c[111][111];
			char ans[111][111];
			int n,m,k;
			cin>>n>>m>>k;
						int values[k+1]={0};
			int count=0;
			for(int i =1;i<=n;i++)
			{
				scanf("%s",c[i]+1);
				for(int j=1;j<=m;j++)
			    count+=(c[i][j]=='R');
				
			}
			
			
			int q=count/k;
			int re=count%k;
			for(int i=1;i<=k;i++)
			{
			values[i]+=q;
			if(re>0){
			values[i]+=1;
			re--;}
			}
			
			
			
			int now=1;
			int j=1;
			
	char current='a';
	char prev='.';
	for(int i =1;i<=n;i++)
	{

		if(j==1)
		{
				for(j=1;j<=m;j++)
				{

				     char ch=c[i][j];

				     if(ch=='R')
				     {
				     	
				    if(values[now]>0)
				    {
				     	values[now]=values[now]-1;
				     	ans[i][j]=current;
				     	prev=current;
				     	
				     	if(values[now]==0)
				     	{
				     	 if(char(current)=='z')
				     	{
				     		current='A';
				     	}
				     	else if(char(current)=='Z')
				     	{
				     			current='0';
				     	}
				     	else
				     	{
				     		current=char(current+1);
				     	}
				     		now++;
				     	}
				     	
				     	
				     	
				     	
				     	
				    }

				     }
				     else
				     {
				     	if(prev=='.')
				     	ans[i][j]=char(current);
				     	else
				     	ans[i][j]=char(prev);
				     }
				     
				     
				
					
					
					
				}
				j=m;
		}
		else
		{
				for(j=m;j>=1;j--)
				{
			
				 char ch=c[i][j];
				     if(ch=='R')
				     {
				     if(values[now]>0)
				    {
				     	values[now]--;
				     	ans[i][j]=current;
				     	prev=current;
				     	if(values[now]==0)
				     	{
				     	if(char(current)=='z')
				     	{
				     		current='A';
				     	}
				     	else if(char(current)=='Z')
				     	{
				     			current='0';
				     	}
				     	else
				     	{
				     		current=char(current+1);
				     	}
				     		now++;
				     	}
				     	
				     	
				     	
				     	
				     	
				    }

				     }
				     else
				     {
				     		if(prev=='.')
				     		ans[i][j]=char(current);
				     	else
				     			ans[i][j]=char(prev);
				     }
				     
				    
					
					
				}
				j=1;
			
		}
			   
				
				
	}
			
			
			
			
			for(int i=1;i<=n;i++)
			{
			for(int j=1;j<=m;j++)
			{
			cout<<ans[i][j];
			}
			cout<<endl;}
			
		
			
			
	}
}
