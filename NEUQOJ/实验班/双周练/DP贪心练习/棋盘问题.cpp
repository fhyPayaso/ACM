#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	unsigned long long a[35][35];
	int flag[35][35];
	memset(a,0,sizeof(a));
	memset(flag,0,sizeof(flag));
	int m,n,x,y;
	cin>>m>>n;
	m++;n++;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		flag[x+1][y+1]=1;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1&&j==1)
			a[i][j]=1;
			else if(flag[i][j]==1)
			a[i][j]=0;
			else
			a[i][j]=a[i][j-1]+a[i-1][j];
		}
	}

	cout<<a[m-1][n-1]<<endl;
	
	return 0;
} 
