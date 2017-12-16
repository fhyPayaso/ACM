#include<iostream>
#include<cstring>
using namespace std;
int n,m,a[20][20],sum;
bool flag[20][20];
int ax[2]={1,0};
int ay[2]={0,1};
void dfs(int x,int y,int mm)
{
	mm+=a[x][y];
	if(x==n&&y==m)
	{
		if(mm>0&&mm<sum)
		sum=mm;
		return ;
	}
	
	flag[x][y]=true;
	
	for(int i=0;i<2;i++)
	{
		int xx=x+ax[i];
		int yy=y+ay[i];
		if(xx>=1&&yy>=1&&xx<=n&&yy<=m&&flag[xx][yy]!=true)
		dfs(xx,yy,mm);
	}

	flag[x][y]=false;
}

int main()
{
	while(cin>>n>>m)
	{
		memset(flag,false,sizeof(flag));
		int i,j;sum=11111;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			cin>>a[i][j];
			dfs(1,1,0);
		if(sum!=11111)	
			cout<<sum<<endl;
		else 
			cout<<"-1"<<endl;	
	}

	return 0;
}

