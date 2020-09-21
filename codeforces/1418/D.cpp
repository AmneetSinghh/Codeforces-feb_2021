/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/

#include<bits/stdc++.h>
#define int long long
#define ll long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
#define N 1000000 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */


void Waheguru()
{
int n,q;
cin>>n>>q;
int a[n+1];
multiset<int> diff,s;
diff.insert(0);
F(i,n)cin>>a[i],s.insert(a[i]);


sort(a+1,a+1+n);
for(int i=2;i<=n;i++)diff.insert(a[i]-a[i-1]);
if(n<=2)cout<<"0";
else cout<<(*s.rbegin()-*s.begin())-*diff.rbegin();
tr;


F(i,q)
{
int t,v;cin>>t>>v;
// for(auto sd:s)cout<<sd<<" ";
// tr;
// for(auto sd:diff)cout<<sd<<" ";
// tr;
s.insert(0);

if(t==0 && s.size()>1)
{
    // Deleting
    
    auto lo=s.lower_bound(v);
    int first=-1,second=-1;
    ++lo;

    if(lo!=s.end()){
    	// erase the single occurence 
    	auto val=*lo-v;// this is 2
    	first=*lo;

    	multiset<int>::iterator it, it1;
		it = diff.find(val);
		it1 = it;
		it1++;
		diff.erase (it, it1);
    }
    // take the previous element delete baby
    


    --lo;

    --lo;

    if(*lo!=0){
    	auto val=v-*lo;
    	second=*lo;
    	multiset<int>::iterator it, it1;
		it = diff.find(val);
		it1 = it;
		it1++;
		diff.erase (it, it1);
    }
    
    
    
    if(first!=-1 && second!=-1)diff.insert(first-second);
    multiset<int>::iterator it, it1;
		it = s.find(v);
		it1 = it;
		it1++;
		s.erase (it, it1);
		
// 		for(auto sd:s)cout<<sd<<" ";
// tr;
// for(auto sd:diff)cout<<sd<<" ";
// tr;
		
		
		
   
}
else
{
    // Adding
    auto lo=s.lower_bound(v);
    int first=-1,second=-1;
    if(lo!=s.end())diff.insert(*lo-v),first=*lo;
    --lo;
    if(*lo!=0)diff.insert(v-*lo),second=*lo;
    s.insert(v);
    
        // erase the difference
        if(first!=-1 && second!=-1)
        {
        multiset<int>::iterator it, it1;
		it = diff.find(first-second);
		it1 = it;
		it1++;
		diff.erase (it, it1);
        }
 

}

s.erase(0);
if(s.size()>0)
cout<<(*s.rbegin()-*s.begin())-*diff.rbegin();
else cout<<"0";
tr;

}





}
 




int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}