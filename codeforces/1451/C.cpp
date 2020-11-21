//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************
//********************THIS IS NAKLI PENCHO***********************************

#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=100005;

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    int one[27]={0},two[27]={0};
    for(int i=0;i<a.size();i++)one[a[i]-'a']++;
    for(int i=0;i<b.size();i++)two[b[i]-'a']++;
    int flag=0;
    int total=0;
    for(int i=0;i<26;i++)/// k is 8
    {
      int first=one[i];//17
      int second=two[i];//16

      // this is the wrong condition:   WHY
      if(first%k || second%k)
      {
      	if(total%k)flag=1;
      	total+=first;
      	total-=second;
      if(total<0)flag=1;// a b c d e f g h i j k l m n o p q r s t u v w z
      if(total%k)flag=1;//  k k  k k k k k k kk k  k k  k k k  k k k  k k 
      continue;
      }
      total+=first;
      total-=second;
      if(total<0)flag=1;// a b c d e f g h i j k l m n o p q r s t u v w z
      if(total%k)flag=1;//  k k  k k k k k k kk k  k k  k k k  k k k  k k 
    }

    if(flag==1)cout<<"No";
    else cout<<"Yes";
    tr;

  }




}