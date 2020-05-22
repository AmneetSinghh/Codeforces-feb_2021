#include <bits/stdc++.h>
using namespace std;
int n,i,j,k,a[222000];
int main(){
	cin>>n;
	for(i=2;i<=n;i++)if(a[i]==0){j++;for(k=i;k<=n;k+=i)a[k]=j;};
	for(i=2;i<=n;i++)cout<<a[i]<<" ";
}
