#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,d,e,f;
int main(){
std::cin>>n;
while(n--)
{
std::cin>>a>>b>>c,d+=a,e+=b,f+=c;
}
std::cout<<(d|e|f?"NO":"YES");}
