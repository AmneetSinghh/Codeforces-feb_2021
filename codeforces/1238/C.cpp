#include<cstdio>
 
using namespace std;
 
const int N = 200005;
 
int q, h, n, p[N], ans;
 
int main(){
	scanf("%d", &q);
	while(q--){
		ans = 0;
		scanf("%d%d", &h, &n);
		for(int i = 1; i <= n; i++)
			scanf("%d", &p[i]);
		p[n+1] = 0;
		for(int i = 2; i <= n; i++){
			if(p[i] == p[i+1] + 1)
				i++;
			else
				ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
