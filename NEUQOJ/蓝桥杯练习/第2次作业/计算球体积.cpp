#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r,v;
	while(cin>>r)
	{
		v=(4*r*r*r*3.1415926)/3;
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<v<<endl;
	}
	return 0;
 } 
