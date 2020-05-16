#include <bits/stdc++.h>
 
using namespace std;
int ans;
long long a,b;
void foo(int v){
int x=0,y=0;
while(a%v==0) a/=v,x++;
while(b%v==0) b/=v,y++;
ans+=abs(x-y);
}
int main()
{
cin>>a>>b;
foo(2);
foo(3);
foo(5);
cout<<(a==b ? ans:-1);
}
