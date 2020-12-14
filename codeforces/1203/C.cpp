#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
 int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
int a[400005];
void printAllDivisors(int N) 
{ 
  
    int g = a[0]; 
  
    // Set to store all the 
    // common divisors 
    set<int> divisors; 
  
    // Finding GCD of the given 
    // N numbers 
    for (int i = 1; i < N; i++) { 
        g = gcd(a[i], g); 
    } 
  
    // Finding divisors of the 
    // HCF of n numbers 
    for (int i = 1; i * i <= g; i++) { 
        if (g % i == 0) { 
            divisors.insert(i); 
            if (g / i != i) 
                divisors.insert(g / i); 
        } 
    } 
  
    cout<<divisors.size();
    tr;
} 
  

 
 
int32_t main() {
    io;
   int t=1;
    while (t--){
   int n;
  cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
      printAllDivisors(n);




 
    }  
 }
