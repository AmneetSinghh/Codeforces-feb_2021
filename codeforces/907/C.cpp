#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, cnt = 0;
    set<char> pos;
    for(char i = 'a'; i <= 'z'; i++) 
	pos.insert(i);
    cin >> n;
    for(int i = 0; i < n;i++){
        char o;string w;
        cin >> o>>w;
        if(o == '.')
		{
           for(char a : w) 
		   pos.erase(a);
        }
        else if(o == '!'){
            set<char> x;
            if(pos.size() == 1){cnt++; continue;}
            for(char a : w) x.insert(a);
            //abcdsg
            for(char i = 'a'; i <= 'z'; i++) if(!x.count(i)) pos.erase(i);
        }
        else {
            if(pos.size() == 1 and i != n - 1) cnt++;
            pos.erase(w[0]);
        }
    }
    cout << cnt << endl;
}
