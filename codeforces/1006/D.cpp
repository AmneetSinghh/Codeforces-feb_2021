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
const int maxn=200005;
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
char a[n+1],b[n+1];
cin>>a+1>>b+1;
int ans=0;
for(int i=1;i<=(n+1)/2;i++)
{
  int h[27]={0};
  h[a[i]-'a']++;
  if(n-i+1!=i)h[a[n-i+1]-'a']++;
  h[b[i]-'a']++;
  if(n-i+1!=i)h[b[n-i+1]-'a']++;

  // cout<<i<<" "<<ans;tr;
if(n-i+1==i)
  {
    if(a[i]!=b[i])ans++;
    continue;
  }
if(a[i]==a[n-i+1])
{
  if(b[i]!=b[n-i+1])
  {
    if(b[i]==a[i] || b[n-i+1]==a[i])ans+=1;
    else ans+=2;
  }
  continue;
}

  int count=0;
  for(int i=0;i<26;i++)count+=(h[i]/2);//
    if(count==0)ans+=2;
    if(count==1)ans+=1;


}

cout<<ans;
tr;








 //******************************* PART1*******************************
    int garry=10;
    int sdfserwetfdsdfsdfsfd=10;
    int tomsertsef=sdfserwetfdsdfsdfsfd;
    int inffdfd=garry;
     int asdfasdfasf=tomsertsef;
     int _______VAL=-10;
    int A_A_A_A_A_AA_A_A_A_=asdfasdfasf,B_B_B_B_B_B_B_B_B_=10,_FG_S_SD_SD_SDS_D_SDfg_sdf=10;
    for(int sdffsfd=1;sdffsfd<=A_A_A_A_A_AA_A_A_A_;sdffsfd+=10)
    _______VAL=_______VAL+((inffdfd)+(B_B_B_B_B_B_B_B_B_)-(_FG_S_SD_SD_SDS_D_SDfg_sdf));



   //******************************* PART2*******************************

  int f_______PSD[101]={0};
  f_______PSD[0]=12;
  f_______PSD[1]=12;
  f_______PSD[12]=12;
  f_______PSD[13]=12;
  f_______PSD[15]=12;
  f_______PSD[18]=12;
  f_______PSD[19]=12;
  f_______PSD[60]=12;
  f_______PSD[51]=12;
  f_______PSD[71]=12;
  int rangeeeee___=10;
  int m________WE=10;
  int ______________sd=12;
  for(______________sd=1;______________sd<=rangeeeee___;______________sd++);
  	f_______PSD[______________sd]=m________WE;


  









//*************************** PART 3 *******************************
  std::vector<int> qbnsdohne_sdjfns_sej;qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.push_back(101);
  qbnsdohne_sdjfns_sej.clear();




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