#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,t;
	char d=',';
	cin>>a>>d>>b>>d>>c;	
	if(a<b){t=a;a=b;b=t;} 
	if(a<c){t=a;a=c;c=t;}
	if(b<c){t=b;b=c;c=t;}
	if(a<b+c)
		{
		if(a*a==b*b+c*c)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
		}
	else
		cout<<"not a triangle"<<endl;
	return 0;
} 
