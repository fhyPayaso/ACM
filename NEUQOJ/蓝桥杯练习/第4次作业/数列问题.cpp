#include<iostream>
using namespace std; 
int main()
{
	int a[40],n,i;
	cin>>n;
	a[1]=3;
	a[2]=4;
	a[3]=5;
	for(i=4;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	cout<<a[n];
	return 0;
 } 
