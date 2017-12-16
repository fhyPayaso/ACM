#include<iostream>
using namespace std;
int main()
{
	int a[50],n,m;
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=40;i++)
	a[i]=a[i-1]+a[i-2];
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		cout<<a[m]<<endl;
	}
	return 0;
} 
