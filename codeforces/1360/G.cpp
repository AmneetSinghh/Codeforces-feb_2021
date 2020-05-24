#pragma GCC optimize("O3")
#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <math.h>
#include <memory.h>
#include <stdio.h>
 
#include <algorithm>
#include <complex>
#include <ctime>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
 
#define y0 sdkfaslhagaklsldk
 
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define tm sdfjahlfasfh
#define lr asgasgash
#define norm asdfasdgasdgsd
#define left asdgashgrketwjklrej
#define have adsgagshdshfhds
#define ends asdgahhfdsfshdshfd
#define prev asdgSHJsfgsdfhdsh
#define hash asdgasdgasdgdfrywewery
 
#define eps 1e-12
#define M_PI 3.141592653589793
#define bsize 1024
 
#define ldouble long double
using namespace std;
 
#define bs 1000000007
 
const int N = 110031;
 
int tests,n,m,a,b;
 
int ans[131][131];
 
int main() {
  ios_base::sync_with_stdio(0);
  cin>>tests;
  for (;tests;--tests){
	  cin>>n>>m>>a>>b;
	  if (n*a!=m*b)
	  {
		  cout<<"NO"<<endl;
		  continue;
	  }
	  int ptr=0;
	  for (int i=1;i<=n;i++){
		  for (int j=1;j<=m;j++){
			  ans[i-1][j-1]=0;
		  }
	  }
	  for (int i=0;i<n;i++){
		  for (int j=0;j<a;j++){
			  ans[i][ptr]=1;
			  ++ptr;
			  ptr%=m;
		  }
	  }
	  cout<<"YES"<<endl;
	  for (int i=0;i<n;i++){
		  for (int j=0;j<m;j++){
			  cout<<ans[i][j];
		  }
		  cout<<endl;
	  }
  }
 
  // cin.get(); cin.get();
  return 0;
}
