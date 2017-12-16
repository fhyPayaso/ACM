#include<iostream>
using namespace std;
int main()
{
	int a,b,m,t,max,min,a1,b1;
	cin>>a>>b;
	a1=a;
	b1=b;
	m=a;
	if(a<b)
	{
		a=b;
		b=m;
	}
	while(a%b!=0)
	{
		t=b;
		b=a%b;
		a=t;
		min=b;
	}
	 max=(a1*b1)/min;
	 cout<<min<<" "<<max<<endl;
	return 0;
 } 
