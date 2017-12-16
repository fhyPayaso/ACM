#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a,x1,x2;
	cin>>a;
	x1=a/2;
	x2=(x1+a/x1)/2;
	do
	{
	x1=x2;
	x2=(x1+a/x1)/2;
	}
	while(fabs(x2-x1)>=1e-5);
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<x2<<endl;
	return 0;
 } 
