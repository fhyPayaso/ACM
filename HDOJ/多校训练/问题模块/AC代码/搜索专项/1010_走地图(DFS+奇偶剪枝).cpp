#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
char a[10][10];
int m,n,t,f,flag[10][10];
int sx,sy,dx,dy;
int mov[2][4]={1,-1,0,0,
               0,0,1,-1};
void dfs(int x,int y,int ti)
{
	if(x==dx&&y==dy&&ti==0)
	{
		f=1;
		return ;
	}
	if(ti<0) return ;
	
	for(int i=0;i<4;i++)
	{
		int nx=x+mov[0][i],ny=y+mov[1][i];
		
		if(nx>=1&&ny>=1&&nx<=m&&ny<=n&&!flag[nx][ny])
		{
			flag[nx][ny]=1;
			dfs(nx,ny,ti-1);
			flag[nx][ny]=0;
			if(f==1)
			return ;//ÀÊ ±≈–∂œ «∑Ò¬˙◊„£¨∑Ò‘ÚTLE 
		}
	}
}

int main()
{
	
	//freopen("in.txt","r",stdin);
	while(~scanf("%d %d %d",&m,&n,&t))
	{
		if(!m&&!n&&!t) break;
		memset(flag,0,sizeof(flag));
		int xnum=0;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
				
				if(a[i][j]=='S')
				{
					sx=i;
					sy=j;
					flag[i][j]=1;
				} 
				if(a[i][j]=='D') 
				{
					dx=i;
					dy=j;
				}
				if(a[i][j]=='X')
				{
					flag[i][j]=1;
					xnum++;
				} 
			}
				
		}		
		f=0;
		if((t-(abs(sx-dx)+abs(sy-dy)))%2==0&&m*n-xnum>=t)//∆Ê≈ººÙ÷¶ 
		{
			dfs(sx,sy,t);
		}
		
		if(f) printf("YES\n");
		else  printf("NO\n");
		
	}
	return 0;
}
