#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100005],b[100005],c[100005];
int main(){
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){cin>>a[i];}
    b[0]=a[0];
    for(int i=1;i<n;i++){
        b[i]=max(a[i],b[i-1]);
        if(b[i]==a[i]){c[i-1]=b[i-1];}
        else{c[i-1]=a[i];}
    }ll ind;
    for(int i=0;i<m;i++){cin>>ind;
    if(ind<n){cout<<b[ind-1]<<" "<<a[ind]<<'\n';}
    else{ind=(ind-1)%(n-1);cout<<b[n-1]<<" "<<c[ind]<<'\n';}
    }
}
