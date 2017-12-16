#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int a[1000][1000];
int res[1000][1000];
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	memset(res,0,sizeof(res));
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		cin>>a[i][j];
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1)
			{
				if(i==1&&j==1) res[i][j]=a[i][j];
				else if(i==1&&j!=1) res[i][j]+=res[i][j-1];
				else if(j==1&&i!=1) res[i][j]+=res[i-1][j];
			}
			else
			{
				res[i][j]=min(res[i-1][j],res[i][j-1])+a[i][j]; 
			}
		}
	}
	if(res[m][n]>0)
		cout<<res[m][n]<<endl;
	else 
		cout<<"-1"<<endl;	
	return 0;
}
