#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long n,a,ans=0,y;
    cin>>n>>a;
    long long x=a;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        y=(x*a)/__gcd(x,a);
        ans=__gcd(ans,y);// gcd of the all the lcm 's bro'
        x=__gcd(a,x);// gcd's of all teh previous make the lcm with ti , bro
    }
    cout<<ans<<endl;
}
