#include<iostream>
using namespace std;
int main()
{
	char a[1005][2005];
	int m,n,i,j;
	cin>>m>>n;
	
	for(i=1;i<=n;i++)
		for(j=1;j<=m+n-1;j++)
		a[i][j]='.';
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i+m-1;j++)
		a[i][j]='*';
		
		for(j=m+n-i;j>n-i;j--)
		a[i][j]='*';
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m+n-1;j++)
		cout<<a[i][j];	
		cout<<endl;
	}	
	
	return 0;
}
