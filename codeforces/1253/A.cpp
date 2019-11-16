#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	        
int t;
cin>>t;
while(t--)
{
	
int n;
cin>>n;
int a[n+1],b[n+1];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];

int flag=0;
int margin=-1;
int z=-1;
for(int i=0;i<n;i++)
{
	
//cout<<z<<"  " <<a[i]<<"  "<<b[i]<<"  "<<margin<<endl;
   if(z!=-1)
   {
   	if(a[i]==b[i])
   	continue;
   	else if(a[i]>b[i])
   	{
   		 flag=1;

         break;
   	}
   	else if(b[i]>a[i] && margin!=b[i]-a[i]){
   	flag=1;
   	break;
  
   	}
   	else if(b[i]>a[i] && margin==b[i]-a[i]  && z+1==i){
   	++z;
   	continue;}
   	else{
   	flag=1;
   	break;}
   }
   else
   {
   
   if(a[i]==b[i])
   continue;
   else if(a[i]>b[i]){
   flag=1;
   break;}
   else if(a[i]<b[i] && margin==-1)
   {
   	margin=b[i]-a[i];
   	z=i;
   }
   else{
   flag=1;
   break;}
   }
}
if(flag==1)
cout<<"NO\n";
else
cout<<"YES\n";

}
}


