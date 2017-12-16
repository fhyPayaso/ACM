#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[10001];
	cin>>n;
	a[1]=1;a[2]=1;
	for(int i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		if(a[i]>7654321)
		a[i]%=7654321;
	}
	cout<<a[n];
	return 0;
} 
