#include<bits/stdc++.h>
using namespace std;

 void Short_Term_Dream_Google_Ai()
 {
   int n,k;
   cin>>n>>k;
   int a[n+1];
   for( int i=0;i<n;i++)
   cin>>a[i];
   
  int  pl=a[k-1];
   int count=0;
   
    for( int i=0;i<n;i++)
    {
           if(a[i]==0)
           break;
           if(a[i]>=pl)
           count++;
           else
           break;
           
    }
    cout<<count<<"\n";
   
   
 }
int main()
{
Short_Term_Dream_Google_Ai();
}
