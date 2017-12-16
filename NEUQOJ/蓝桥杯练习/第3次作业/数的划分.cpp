#include<iostream>
using namespace std;
int a[10][205];
int main()
{
	int n,k;
	cin>>n>>k;
	a[0][0]=1;
	for(int i=1; i<=k; i++)
	{
		for(int j=i; j<=n; j++)
		{
			a[i][j]=a[i][j-i]+a[i-1][j-1];
		}
	}
	cout<<a[k][n];
	return 0;
}
