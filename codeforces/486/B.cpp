#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,d;
		cin>>n>>m;
	int a[n][m];
	int b[n][m];
    int checkrow[n]={0};
    int checkcol[m]={0};

	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	cin>>d;
	a[i][j]=d;}}
	
	//for the row
	
	for(int i=0;i<n;i++)
	{
	int count=0;// count number of ones
	for(int j=0;j<m;j++)
	{
	if(a[i][j]==1)
	count++;
	}
	if(count==m)
	checkrow[i]=1;
	
	}
	// for the col
	for(int i=0;i<m;i++)
	{
	int count=0;// count number of ones
	for(int j=0;j<n;j++)
	{
	if(a[j][i]==1)
	count++;
	}
	if(count==n)
	checkcol[i]=1;
	
	}
	
// do the and gate
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
	if(checkrow[i]==1 && checkcol[j]==1)
	b[i][j]=1;
	else
	b[i][j]=0;
	
	}}
	
	
	bool flag=true;
// now make the prevous matrix fromt this bmatrix,
int checkrow_b[n]={0};
int checkcol_b[m]={0};
	
	//for the row
	
	
	for(int i=0;i<n;i++)
	{
	int count=0;// count number of ones
	for(int j=0;j<m;j++)
	{
	if(b[i][j]==0)
	count++;
	}
	if(count==m)
	checkrow_b[i]=0;
	else
	checkrow_b[i]=1;
	
	}
	// for the col
	
	for(int i=0;i<m;i++)
	{
	int count=0;// count number of ones
	for(int j=0;j<n;j++)
	{
	if(b[j][i]==0)
	count++;
	}
	if(count==n)
	checkcol_b[i]=0;
	else
	checkcol_b[i]=1;
	
	}
	
		
	//do the or gate
for(int i=0;i<n;i++){
	int value;
for(int j=0;j<m;j++){
	if(checkrow_b[i]==0 && checkcol_b[j]==0)
   value=0;
	else
	value=1;
	
	if(value!=a[i][j]){
	flag=false;
	break;}
	
	}
	if(flag==false)break;
	
}
	if(flag==false)
	cout<<"NO\n";
	else
	{
		cout<<"YES\n";
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
	cout<<b[i][j]<<" ";
	}cout<<endl;}
	
	
	
	
}
}
