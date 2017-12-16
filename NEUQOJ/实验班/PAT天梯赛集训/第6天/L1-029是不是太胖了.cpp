#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n;
	cin>>n;
	n-=100;
	n*=0.9;
	n*=2;
	cout<<fixed<<setprecision(1)<<n;
	return 0;
}
