#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int st=n+1;
while(true)
{
string start=to_string(st);
if(start[0]!=start[1] && start[0]!=start[2] && start[0]!=start[3] && start[1]!=start[2] && start[1]!=start[3] && start[2]!=start[3]){
cout<<start<<endl;
break;}

++st;
}






}
