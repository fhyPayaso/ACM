#include<iostream>
using namespace std;
int main()
{
	int n,a[25][25],i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		cin>>a[i][j];
	}
	
	for(i=1;i<=n;i++)
	{
		if(a[1][i]==1)
		cout<<i<<" ";
	}
	return 0;
} 
