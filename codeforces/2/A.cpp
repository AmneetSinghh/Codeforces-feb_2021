#include <bits/stdc++.h>
using namespace std;
string s[1001];
int i,m,n,o[1001];
map<string,int>p,t;
main()
{
cin>>n;
for(;i<n;i++)
cin>>s[i]>>o[i], p[s[i]]+=o[i];
// s t points plus karte

for(i=0;i<n;i++)
m=max(m,p[s[i]]);
//cout<<m<<endl;

for(i=0; p[s[i]]<m  ||  (t[s[i]]+=o[i]) <m;i++);
cout<<s[i];
}
