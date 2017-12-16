#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[22][22];
	int n,m;
	while(cin>>n>>m)
	{
	int k1=0,k2=0,k3=-100;
	if(n==0&&m==0)
	return 0;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	cin>>a[i][j];
	for(int j=0;j<=m;j++)
	{
		a[0][j]=0;
		a[n+1][j]=0;
	}
	for(int i=0;i<=n;i++)
	{
		a[i][0]=0;
		a[i][m+1]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int x=0;
			if(a[i][j]*a[i-1][j]>=0)
			x-=abs(a[i-1][j]);
			else
			x+=abs(a[i-1][j]);
			
			if(a[i][j]*a[i+1][j]>=0)
			x-=abs(a[i+1][j]);
			else
			x+=abs(a[i+1][j]);
			
			if(a[i][j]*a[i][j-1]>=0)
			x-=abs(a[i][j-1]);
			else
			x+=abs(a[i][j-1]);
			
			if(a[i][j]*a[i][j+1]>=0)
			x-=abs(a[i][j+1]);
			else
			x+=abs(a[i][j+1]);
			if(x>k3)
			{
				k1=i;k2=j;k3=x;
			}
		}
	}
	cout<<k1<<" "<<k2<<" "<<k3<<endl;
	}
	return 0;
} 
