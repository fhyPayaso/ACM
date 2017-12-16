#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float s,h;
	cin>>h;
	s=(5.0/9.0)*(h-32);
	cout<<"c="<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl; 	
	return 0;
}
