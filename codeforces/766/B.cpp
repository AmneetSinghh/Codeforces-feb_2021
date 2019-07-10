#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main()
{

int n;cin>>n;long long int a[n];for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
bool f=true;
// teh thing to understand is can we make from two small hmbers  a big numebr a+b>c....... then c+b>a and c+a>b is always true
for(int i=0;i<n-2;i++){
if(a[i]+a[i+1]>a[i+2]){                                    
cout<<"YES\n";f=false;break;}}
if(f==true)
cout<<"NO\n";

}





