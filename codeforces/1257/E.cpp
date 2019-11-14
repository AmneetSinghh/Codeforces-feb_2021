#include <bits/stdc++.h>
using namespace std;
int a[200005];
int s[200005];
int main() 
{
	int k1,k2,k3;
	scanf("%d%d%d",&k1,&k2,&k3);
	int n = k1 + k2 + k3;
	
	
	for (int i=0;i<n;i++) 
	scanf("%d",&a[i]);
	
	
	sort(a,a+k1);
	sort(a+k1,a+k1+k2);
	sort(a+k1+k2,a+n);	
	

	int tail = 0;
	// stail has initially all the zeros
	
	for (int i=0;i<n;i++) 
	{
		if (a[i] > s[tail]) 
		{
		  //  cout<<a[i]<<"  "<<s[tail]<<"  "<<tail<<endl;
			s[++tail] = a[i];// its the tail which is going forward.
			continue;
		}
		int p = upper_bound(s,s+tail,a[i]) - s;// firszt greateest exjange
		s[p] = a[i];
	}
	printf("%d\n",n-tail);
	return 0;
}
