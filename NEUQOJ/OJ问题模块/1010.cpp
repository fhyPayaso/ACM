#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float sum=0;
	for(int i=1;i<=30;i++)
	{
		float t=1.0;
		for(int j=1;j<=i;j++)
			t*=j;
		sum+=t;
	}
	cout<<setiosflags(ios::scientific)<<setprecision(2)<<sum;
	return 0;
}
