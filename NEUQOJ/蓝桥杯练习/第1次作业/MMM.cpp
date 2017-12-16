#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double s;
	for(int i=1;i<=10;i++)
	{
		s=3.1415926*i*i;
		if(s>=40&&s<=90)
		cout<<"r="<<i<<" area="<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl;
	}
	return 0;
}
