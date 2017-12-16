#include<iostream>
using namespace std;
const int mod=10007;
const int x=1000005;
int a[x];
int main()
{
	int n;
	cin>>n;
	a[1]=1,a[2]=1;
	for(int i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		a[i]%=mod;	
	}
	cout<<a[n];
	return 0;
}

