#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[10][205];
	memset(a,0,sizeof(a));	
	for(int i=1;i<=n;i++) a[1][i]=1;
	for(int i=1;i<=k;i++) a[i][i]=1;
	for(int i=2;i<=k;i++)
		for(int j=2;j<=n;j++)
			a[i][j]=a[i-1][j-1]+a[i][j-i];
	cout<<a[k][n]<<endl;
	return 0;
 } 
