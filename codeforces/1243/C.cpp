#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> vc;

void SieveOfEratosthenes() 
{ 
 
    bool prime[1000001]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=1000000; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=1000000; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (ll p=2; p<=1000000; p++) {
       if (prime[p]) {
          vc.push_back(p);}}
} 
  

bool isPrime(ll n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}

int main() 
{


	SieveOfEratosthenes();

	/// generate all prime numbers
	
	ll n;
	cin>>n;
	vector<ll> mg;
	if(n==1)
	cout<<n<<endl;
	else if(isPrime(n))
	cout<<n<<endl;
	else
	{

	  for(ll j=0;j<vc.size();j++ )
	  {
			int flag=0;
			while(n%vc[j]==0)
			{
			flag=1;
			n/=vc[j];
				
			}
			if(flag==1)
			mg.push_back(vc[j]);

			
		}
	    if(n!=1)
	    mg.push_back(n);
		
		
		if(mg.size()>1)
		cout<<"1\n";
		else
		cout<<mg[0]<<endl;
		
	
	}

		
		
	}
	
