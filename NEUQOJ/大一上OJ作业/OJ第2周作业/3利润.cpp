#include<iostream>
using namespace std;
int main()
{
	float a,b,b1,b2,b4,b6,b10,x=100000;
	cin>>a;
	b1=x*0.1;
	b2=b1+x*0.075;
	b4=b2+x*2*0.05;
	b6=b4+2*x*0.03;
	b10=b6+4*x*0.015;
	if(a<=x)
		b=a*0.1;
	else if(a<=2*x)
		b=b1+(a-x)*0.075;
	else if(a<=4*x)
		b=b2+(a-2*x)*0.05;
	else if(a<=6*x)
		b=b4+(a-4*x)*0.03;
	else if(a<=10*x)
		b=b6+(a-6*x)*0.015;
	else 
		b=b10+(a-10*x)*0.01;
	
	cout<<b<<endl;
	return 0;
}
