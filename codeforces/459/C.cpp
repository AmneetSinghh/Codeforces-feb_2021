#include<bits/stdc++.h>
using namespace std;
int k,i,j,n;long long d;
int v[2000];
main()
{
    cin>>n>>k>>d;
    v[n-1]=n-1;
    for (i=0;i<d;i++) v[n-1]/=k;
    if (v[n-1]) {cout<<-1;return 0;}
    for (i=0;i<n;i++) v[i]=i;
    for (i=0;i<d;i++)
    {for (j=0;j<n;j++) cout<<v[j]%k+1<<' ',v[j]/=k;
    cout<<'\n';
    }
}
