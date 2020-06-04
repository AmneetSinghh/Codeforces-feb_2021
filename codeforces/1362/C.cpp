#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int
int ans[65];
int32_t main(){
    
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

ans[0]=1;
int res=2;;
 for(int i=1;i<=63;i++){
 	res*=2;
 	ans[i]=res-1;
 }
 
 
	int T;
	cin >> T;while(T--){
		int N,sol=0; cin >> N;
		for(int i = 0; i < 62; ++i){
			if(N & (1ll<<i)){
				sol += ans[i];
				continue;
			}
		}
	cout<<sol<<"\n";//1152921504606846976
	}
         
    return 0;
}
