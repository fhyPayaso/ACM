#include<iostream>
using namespace std;
int main()
{
	int a[56],n;
	a[1]=1;a[2]=1;a[3]=2;
	for(int i=4;i<=55;i++)
	a[i]=a[i-1]+a[i-3]+1;
	cin>>n;
	cout<<a[n]<<endl;
	return 0;
} 
