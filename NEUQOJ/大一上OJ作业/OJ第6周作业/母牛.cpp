#include<iostream>
using namespace std;
int main()
{
	int n,a[51];
	cin>>n;
	a[1]=1;a[2]=1;a[3]=1;
	for(int i=4;i<=50;i++)
	a[i]=a[i-1]+a[i-3];
	cout<<a[n]<<endl;
	return 0;
} 
