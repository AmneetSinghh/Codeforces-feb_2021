/* not_stable but Believer */

#include<bits/stdc++.h>
#define int int
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 10000005
using namespace std;
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;
 int n;

int query(int a)
{
    if (a < 1 or a > n)return INT_MAX;
        int ret;
        cout << "? " << a << endl;
        cin >> ret;
        return ret;
}


void Not_Stable()
{
 cin>>n;
  int l=1;
  int r=n;
  while(l<=r)
  {
    int mid=l + r >> 1;
    int val=query(mid);
    int pre=query(mid-1);
    int next=query(mid+1);
    if(val<min(pre,next)){printf("! %d\n", mid);return;}
    else if(pre<next)r=mid-1;
    else l=mid+1;
  }

}
 
 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}