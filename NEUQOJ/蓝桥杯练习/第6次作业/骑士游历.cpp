#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m,x1,y1,x2,y2,i,j;
	cin>>n>>m>>x1>>y1>>x2>>y2;
	n+=2;m+=2;x1+=2;y1+=2;x2+=2;y2+=2;
	long long a[100][100];
	memset(a,0,sizeof(a));
	a[x1][y1]=1;
	for(i=x1+1;i<=x2;i++)
	{
		for(j=2;j<=m;j++)
		{
			 
			a[i][j]=a[i-2][j-1]+a[i-1][j-2]+a[i-1][j+2]+a[i-2][j+1];//由左侧四个方向不同方法相加得出当前位置的方法 
		}
	}
	cout<<a[x2][y2];
	
	return 0;
} 
