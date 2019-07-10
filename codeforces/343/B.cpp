#include<bits/stdc++.h>
using namespace std;
int main()
{

  string s;cin>>s;
  stack<char> e;
  for (auto r:s)
  {
  if(e.size() && r==e.top() )
  e.pop();
  else
  e.push(r);
  }
  
  if(e.size())
  cout<<"No\n";
  else
  cout<<"Yes\n";
  

}






