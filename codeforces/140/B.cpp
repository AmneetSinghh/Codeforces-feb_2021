#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
int n,val;cin>>n;
int rank[n+1][n+1],al[n+1],a[n+1][n+1],c[n+1];
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
cin>>a[i][j];
rank[i][a[i][j]]=j;
}}

for(int i=1;i<=n;i++){
cin>>c[i];
al[c[i]]=i;
}

int vise[n+1]={0};
for(int i=1;i<=n;i++)
vise[i]=a[i][n];


for(int i=1;i<=n;i++)
{
	int most,second_most=-1;

	for(int m=1;m<=n;m++){
	if(c[m]<=i){most=c[m];break;}}
	
	
	for(int m=1;m<=n;m++){
	if(c[m]<=i && c[m]!=most){second_most=c[m];break;}}
	
	// cout<<"**********************************************\n";
	// cout<<most<<"  "<<second_most<<endl;
	
	
	for(int j=1;j<=n;j++)
	{
		if(most==j && second_most!=-1)
		{ 
		int rank_of_most=rank[j][second_most];
		int vise_rank=rank[j][vise[j]];
		// cout<<rank_of_most<<"  "<<vise_rank<<"  "<<i<<"  "<<j<<" "<<vise[j]<<"\n";
		
		if(rank_of_most<vise_rank)
		vise[j]=second_most;
		}
		else
		{
		if(j==most)continue;
		int rank_of_most=rank[j][most];
		int vise_rank=rank[j][vise[j]];
		if(rank_of_most<vise_rank)
		vise[j]=most;
		
	    // cout<<rank_of_most<<" second "<<vise_rank<<"  "<<i<<"  "<<j<<" "<<vise[j]<<"\n";

		}

	}
}

for(int i=1;i<=n;i++)
cout<<vise[i]<<" ";
cout<<"\n";

}
