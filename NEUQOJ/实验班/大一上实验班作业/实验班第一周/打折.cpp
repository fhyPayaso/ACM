#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	float p=95;
	cin>>n;
	p=n*p;
	if(p>=300)
	p=p*0.85;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<p<<endl;
	return 0;
}
