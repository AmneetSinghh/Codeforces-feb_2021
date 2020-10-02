/*
|********************************************** Not_Stable *********************************************************|                                                                |
|As I always say Let's not Make it complicated, baby                                                                |
|   **     *   *******  *********                                                                                   |
|   * *    *  *      *      *                                                                                       |
|   *  *   *  *      *      *                                                                                       |
|   *   *  *  *      *      *                                                                                       |
|   *    * *  *      *      *                                                                                       |
|   *     **   ******       *                                                                                       |
|                            ******    **********   ******    ******  *         *******                             |
|                            *             *       *      *  *    *   *         *                                   |
|                             ******       *       *      *  *  **    *         *******                             |
|                                  *       *       * **** *  *    *   *         *                                   |
|                                 *        *       *      *  *     *  *         *                                   |
|                            *****         *       *      *   ******   *******  *******                             |
|Keep it Simple baby!                                                                                               |
|Rules are meant for breaking,baby                                                                                  |
|Let's Not make it complicated.                                                                                     |
|********************************************** Not_Stable ********************************************************* 
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
#define tr cout<<"\n" 
#define br break
#define all(v) v.begin(),v.end()
#define inf 1000000000000009
#define ff first
#define mod 1000000007
#define ss second
#define br break
#define maxn 1000010
#define vs vector<string>
#define vi vector<int>

using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 
/*****************************************Things to remember in Contests*******************************************
          set->  find ,insert,erase   is logn;                 All the things are ordered 
          map-> searching in map is O(1) and others are log(n);   All the things are ordered by values smallest to largest
unordered_set->  find ,insert,erase     O(1);
unordered_map->   find,insert,erase     O(1);
So we have to find fast like in O(1) use the unordered_set or unordered_map
*/  
//


const int points[10] = {25, 18, 15, 12, 10, 8, 6, 4, 2, 1};
 
map<string,int> score;
map<string,vi> pos;
 
bool comp1(const string& s1, const string& s2) {
	if (score[s1] != score[s2]) return score[s1] > score[s2];
	return pos[s1] > pos[s2];
}
 
bool comp2(const string& s1, const string& s2) {
	if (pos[s1][0] != pos[s2][0]) return pos[s1][0] > pos[s2][0];
	if (score[s1] != score[s2]) return score[s1] > score[s2];
	F(i,59) if (pos[s1][i] != pos[s2][i]) return pos[s1][i] > pos[s2][i];// not check the first all the positions abby
	return false;
}

void Not_Stable() {

    int t; cin >> t;
    f(_,t){
    	int n; cin >> n;
    	f(i,n) {
    		string s; cin >> s;
    		if (i < 10) score[s] += points[i];
    		else score[s] += 0;
    		if (!pos.count(s)) pos[s] = vi(60,0);
			pos[s][i]++;
    	}
    }
    vs res;
    for(auto sd:score)res.pb(sd.first);
    sort(all(res),comp1);
    cout << res[0] << endl;
    sort(all(res),comp2);
	cout << res[0] << endl;
 

}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif         
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}
