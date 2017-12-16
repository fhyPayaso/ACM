#include<iostream>
using namespace std;
int main()
{
	int m,n,temp,max,min;
	cin>>m>>n;
	int m1=m,n1=n;
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	while(m%n!=0)
	{
		temp=n;
		n=m%n;
		m=temp;
	}
	max=n;
	min=m1*n1/max;
	cout<<max<<endl<<min<<endl;
	return 0;
}
