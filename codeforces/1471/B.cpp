#include<bits/stdc++.h>
#define pb(x) push_back(x);
#define ll long long int 
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<pair<ll,ll>>v;
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            v.pb(make_pair(1,ele));
        }
        for(ll i=0;i<v.size();i++){
            ll fir = v[i].first;
            ll sec = v[i].second;
            if (sec%x)break;
            int ele = sec / x;
            v.push_back(make_pair(fir * x, ele));
        }
        
        ll sum = 0;
        for(ll i=0;i<v.size();i++) sum+=v[i].first*v[i].second;
        
        cout<<sum<<"\n";
    }
    
    return 0;
}