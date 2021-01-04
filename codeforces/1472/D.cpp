/* Coding is love */

#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 100000000000009;
using namespace std;




int32_t main() 
{
    io;
  int g;cin>>g;
    while (g--){
    	int n;
    	cin>>n;
 priority_queue<int> ev,od;
    F(i,n)
    {
    	int j;
        cin>>j;
        if(j%2) od.push(j);
        else ev.push(j);
    }
    int c=0,a=0,b=0;
    while(1)
    {
        if(ev.empty() && od.empty()) break;
        if(c==0)
        {
            if(ev.empty()) od.pop();
            else 
            {
                if(od.empty() || od.top()<=ev.top()) 
                {
                    a+=ev.top();
                    ev.pop();
                }
                else od.pop();
            }
        }
        else
        {
            if(od.empty()) ev.pop();
            else
            {
                if(ev.empty() || ev.top()<=od.top()) 
                {
                    b+=od.top();
                    od.pop();
                }
                else ev.pop();
            }
        }
        c^=1;
    }
    if(a<b) cout<<"Bob\n";
    else if(b<a) cout<<"Alice\n";
    else cout<<"Tie\n";



}


}
