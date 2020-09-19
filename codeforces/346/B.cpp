#include <stdio.h>
#include<bits/stdc++.h>
#include <memory.h>
#include <algorithm>
#define tr cout<<"\n"
using namespace std;
string A,B,v;
int f[1003];
int dp[101][101][101];


void kmp()
{
	int j = 0;
	for (int i = 1;i<v.size(); ++i){
		while (j && v[j] != v[i])j = f[j - 1];
		if (v[i] == v[j])++j;
		f[i] = j;
	}
}
int F(int i, char &c){
	while (i>0 && v[i] != c)
		i = f[i - 1];// that means go to the previous step pencho
	return i + (v[i] == c);
}
int calc(int i, int j, int k)
{
	if(k==v.size())return -1;
	if (i==A.size() || j==B.size())return 0;
	if (dp[i][j][k] == -1){
		dp[i][j][k] = max(calc(i + 1, j, k), calc(i, j + 1, k));// just as previous simple longest common subsequence
		if (A[i] == B[j])
			dp[i][j][k] = max(dp[i][j][k], 1 + calc(i + 1, j + 1, F(k, A[i])));
	}
	return dp[i][j][k];
}

/// thsi is hte print back baby
void print(int i, int j, int k){
	if (i==A.size() || j==B.size() || k==v.size())return;
	if (dp[i][j][k] == calc(i + 1, j, k))	print(i + 1, j, k);
	else if (dp[i][j][k] == calc(i, j + 1, k))print(i, j + 1, k);
	else{
		cout<<A[i];
		print(i + 1, j + 1, F(k, A[i]));
	}
}
int main()
{
    cin>>A>>B>>v;
    kmp();
	memset(dp, -1, sizeof(dp));
	if (!calc(0, 0, 0))cout<<"0";
	else print(0,0,0);
	
	return 0;
}