#include <bits/stdc++.h>
using namespace std;
 #define push_back
#define int long long
#define endl '\n'
#define maxn 100010
const int MOD = 1000000007;
bool IsPowerOfTwo(int x)
{
    return (x != 0) && ((x & (x - 1)) == 0);
}
void solve() {
   int a,b;
   cin>>a>>b;
   if(b>a)swap(b,a);
   if(a==b)cout<<"0\n";
   else
   {
   	int value=a/b,c=0;;
   	if( a%b!=0 || !IsPowerOfTwo(value))
   	cout<<"-1\n";
   	else
   	{
   		while(value>1){value/=2;++c;}
		if(c%3==0)
		cout<<(c/3)<<"\n";
		else cout<<((c/3)+1)<<"\n";
   	}
   
   	
   }
    
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}
