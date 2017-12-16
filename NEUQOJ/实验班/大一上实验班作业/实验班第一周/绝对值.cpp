#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	float p;
	cin>>p;
	p=abs(p);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<p<<endl;
	return 0;
}
