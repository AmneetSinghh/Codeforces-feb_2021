#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,d;
    	cin>>n>>k>>d;
    	int hash[100005]={0};
    	int uni=0;
    	int a[n+1];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	for(int i=0;i<d;i++)
    	{
    		if(hash[a[i]]==0)
    		uni++;
    		hash[a[i]]++;
    	}
    	int mi=uni;
    	
    	for(int i=d;i<n;i++)
    	{
    		hash[a[i-d]]--;
    		if(hash[a[i-d]]==0)
    		{
    		uni--;
    		}
    	    
    		if(hash[a[i]]==0)
    		{
    		uni++;
    		}
    		hash[a[i]]++;
    		
    		mi=min(uni,mi);
    	}
    	cout<<mi<<endl;
    }
}
