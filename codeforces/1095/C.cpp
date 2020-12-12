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

int n,k;
 
// Function to check if x is power of 2
bool check(int n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}

multiset<int,greater<int>> we;
int flag=0;
void calc()
{

    // cout<<k<<" -> "<<we.size();tr;
    // for(auto sd:we)cout<<sd<<" "; tr;

    if(we.size()==k)return;
    if(we.size()<k)
    {
       auto sd=*we.begin();
       if(sd==1 && we.size()<k){flag=1;return;}
       multiset<int>::iterator it, it1;
       it = we.find(sd);
       it1 = it;
       it1++;
       we.erase (it, it1);
       we.insert(sd/2);
       we.insert(sd/2);
       calc();
    }
      
}


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outputt.txt","w",stdout);

#endif
    io;
   int t=1;
    while (t--){
    cin>>n>>k;
    if(k>n)cout<<"NO";
    else
    {
    int val=1;
    int c=0;
    while(val<n)
    {
       ++c;
       val*=2;
    }
    
    if(val>n)val/=2,--c;
int m=n;
    for(int i=c;i>=0;i--)
    {
         if(m>=pow(2,i))m-=pow(2,i),we.insert(pow(2,i));
    }

   if(we.size()>k)cout<<"NO";
   else
   {
      calc();
      if(flag==1)cout<<"NO";
      else
      {
        cout<<"YES";tr;
        for(auto sd:we)cout<<sd<<" ";
            tr;

      }
   }





    }
  


    }  
 }

