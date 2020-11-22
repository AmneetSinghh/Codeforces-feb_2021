// I'll do; 
#include<bits/stdc++.h>
#define int long long 
 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
 #define ll long long
 #define ull unsigned long long
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define tr cout<<endl;
#define br break
#define mod 998244353
#define inf 1000000000000009
#define something 1e-6
using namespace std;
const int maxn=100005;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
  return (ull)rng() % B;
}
clock_t startTime;
double getCurrentTime() {
  return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
// ************************    MY ALL SNIPPTS    *****************************
/*
For the Intractive problems use the scanf and printf  (BEVARE of IDLENESS)
1. bfs
2. dfs
3. factorial
4. for loop
5. gcd
6. lcm
7. lowbit
8. multiseterase    for erasing the multiset
9. pairssort
10. power 
11. primefs   prime factors
12. sieve
13. check_prime
14. conected_components
15. modulo_inverse 
16. factorial_mod_m
17. n_choose_k
18. number_of_div  number of divisorw
19. n_choose_k_mod
20. number_of_div1
*****************************************************************************************
*/
 
void Not_Stable()
{
    
int n;
cin>>n;
int a[n+1];
F(i,n)cin>>a[i];
int ans=0;
int l=0;
int r=n+1;
int first=0;
int second=0;
while(l<r)
{
  // no overlapping
 
  if(first==second)
  {
    ans=first;
    l++;
    first+=a[l];
  }
  else if(first>second)
  {
    r--;
    second+=a[r];
  }
  else if(first<second)
  {
    l++;
    first+=a[l];
  }
  
 
}
 
cout<<ans;
tr;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//  //******************************* PART1*******************************
//     int garry=12112;
//     int sdfserwetfdsdfsdfsfd=10005;
//     int tomsertsef=sdfserwetfdsdfsdfsfd;
//     int inffdfd=garry;
//      int asdfasdfasf=tomsertsef;
//      int _______VAL=-121;
//     int A_A_A_A_A_AA_A_A_A_=asdfasdfasf,B_B_B_B_B_B_B_B_B_=12,_FG_S_SD_SD_SDS_D_SDfg_sdf=121;
//     for(int sdffsfd=1;sdffsfd<=A_A_A_A_A_AA_A_A_A_;sdffsfd+=3)
//     _______VAL=_______VAL+((inffdfd)+(B_B_B_B_B_B_B_B_B_)-(_FG_S_SD_SD_SDS_D_SDfg_sdf));
 
 
 
//    //******************************* PART2*******************************
 
//   int f_______PSD[101]={0};
//   f_______PSD[0]=12;
//   f_______PSD[1]=12;
//   f_______PSD[12]=12;
//   f_______PSD[13]=12;
//   f_______PSD[15]=12;
//   f_______PSD[18]=12;
//   f_______PSD[19]=12;
//   f_______PSD[60]=12;
//   f_______PSD[51]=12;
//   f_______PSD[71]=12;
//   int rangeeeee___=121;
//   int m________WE=1011;
//   int ______________sd=12;
//   for(______________sd=1;______________sd<=rangeeeee___;______________sd++);
//    f_______PSD[______________sd]=m________WE;
 
 
  
 
 
 
 
 
 
 
 
 
// //*************************** PART 3 *******************************
//   std::vector<int> qbnsdohne_sdjfns_sej;qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.push_back(101);
//   qbnsdohne_sdjfns_sej.clear();
 
 
 
 
}
   
 
 
 
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}