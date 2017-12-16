#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c;
	float x;
	cin>>a>>b>>c;
	x=(a+b+c)/3;
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<x<<endl;
	return 0;
}
