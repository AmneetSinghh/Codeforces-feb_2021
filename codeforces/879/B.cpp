#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
   long long  k,mx=0;
      cin>>n>>k;
   unsigned int a[n];

   
   for(int i=0;i<n;i++){
   cin>>a[i];
   if(a[i]>mx) mx=a[i];}
   int cur=a[0];
   int count=0;
 
   for(int i=0;i<n-1;i++)
   {
   	 	
   	if(a[i]==mx || cur==mx){
   	cout<<mx<<endl;break;}
   	
   	if(cur>a[i+1])
   	count++;
   	else{
   	count=1;
   	cur=a[i+1];}
   	
   	if(count==k){
   	cout<<cur<<endl;break;}
   	
   	if(cur==mx){
   	cout<<cur<<endl;break;}
  
   }
   
   
  










}






