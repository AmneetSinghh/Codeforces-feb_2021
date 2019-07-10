#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
 
 
ll a[300010]={0};
int main()
{
    ll n,w,i,g,b;
    cin>>n>>w;
    double ans=0;
 
    for(i=1;i<=2*n;i++)
        cin>>a[i];
 
    sort(a+1,a+n+n+1);
    g=a[1];
    b=a[n+1];
 
    if(b*0.5<=g)
        ans=b*0.5*n+b*n;
    else
        ans=g*n+2*g*n;
        
       if(ans>w)
        ans=w;
    cout<<setprecision(10)<<ans<<"\n";
    
    
    
 

}






