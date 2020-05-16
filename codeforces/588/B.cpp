#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 using namespace std;
#define int long long
#define endl '\n'
#define maxn 100010
const int MOD = 1000000007;
 
void solve(){
	
	int n;cin>>n;
	for(int i=2;i<=sqrt(n)+1;i++)
	{
		while(n%(i*i)==0)
		n/=i;
	}
	cout<<n<<endl;
    
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    while (t--)
        solve();
    return 0;
}
