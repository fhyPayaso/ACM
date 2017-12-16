#include<iostream>
using namespace std;
int main()
{
	int k,n;
	double res;
	cin>>k;
	while(k--)
	{
		cin>>n;
		res=1.0/(3*n+1);
		for(double i=2;i<=n;i++)
		res*=(i/(n+i));
		printf("%.9f\n",res);
	}
	return 0;
 } 
