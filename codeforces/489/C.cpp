#include<bits/stdc++.h>
using namespace std;

int main()
{
	    ios_base::sync_with_stdio(false);
	        cin.tie(NULL);

int m,s;
cin>>m>>s;
int value=0;
for(int i=1;i<=m;i++)
value+=9;
if(m==1 && s<=9)
cout<<s<<" "<<s<<endl;
else if(s>value)
cout<<"-1 -1\n";
else if(s==0)
cout<<"-1 -1\n";
else
{
	
// for the min elements bro
int mi[m+1];
int count=1;
mi[1]=1;
for(int i=2;i<=m;i++)
mi[i]=0;

int j=m;
while(true)
{
	if(count==s)
	break;
	else if(count<s)
	{
		if(mi[j]<9){
		mi[j]++;
		count++;}
		else
		{
			--j;
			mi[j]++;
			count++;
		}
	}
}
// the minumuj
for(int i=1;i<=m;i++)
cout<<mi[i];





// for the maximum

int mx[m+1];
 count=m*9;
for(int i=1;i<=m;i++)
mx[i]=9;

 j=m;
while(true)
{
	if(count==s)
	break;

	 if(count>s)
	{
		
		if(mx[j]==0)
		{
		--j;
		mx[j]--;
		count--;
			
		}
		else if(mx[j]>0)
		{
			count--;
			mx[j]--;
		}
	}
}
// the minumuj
cout<<" ";
for(int i=1;i<=m;i++)
cout<<mx[i];


}






}






