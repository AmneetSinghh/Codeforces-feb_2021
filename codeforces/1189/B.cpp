#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, a[100001];
	cin>>n;
	for(i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	if(a[n-1]<a[n-2]+a[n-3]){
		cout<<"YES\n";
		swap(a[n-1], a[n-2]);
		// just swap the large with n-1 then you are done
		for(i=0; i<n; i++) cout<<a[i]<<" ";
	}
	else 
	cout<<"NO\n";
}
