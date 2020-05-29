#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=0,score=0;
	for(int i=1;i<=30;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]>i)
			{
				sum=0;
			}
			else
			{
				sum=max(0,sum+a[j]);
				score=max(score,sum-i);
			}
		}
	}
	cout<<score;
}
