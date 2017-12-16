#include<iostream>
using namespace std;
int main()
{
	int a,t;
	cin>>a;
	int b[a];
	b[0]=a*a-a+1;
	for(int i=1;i<a;i++)
	b[i]=b[i-1]+2;
	t=a*a*a;
	cout<<a<<"*"<<a<<"*"<<a<<"="<<t<<"="<<b[0];
	for(int i=1;i<a;i++)
	cout<<"+"<<b[i];
	return 0;
}
