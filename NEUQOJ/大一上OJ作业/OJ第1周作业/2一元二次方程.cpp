#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,c;
	double x1,x2;
	cin>>a>>b>>c;
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	if(x2>x1)
	x1=x2;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<x1<<" "
	    <<setiosflags(ios::fixed)<<setprecision(2)<<x2<<endl;	
	return 0;
 } 
