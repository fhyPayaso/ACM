#include<iostream>
#include<cstring>
using namespace std;
char map[105][105];
int flag[105][105];
int x1,y1,n,mi=11111111;

void dfs(int x,int y,int cot)
{
	if(cot>=mi) return;
	if(map[x][y]=='B')
	{
		mi=cot;
		return ;
	}
	flag[x][y]=1;
	if((x-1)>0&&flag[x-1][y]==0&&(map[x-1][y]!=map[x][y])) dfs(x-1,y,cot+1);
	if((y-1)>0&&flag[x][y-1]==0&&(map[x][y-1]!=map[x][y])) dfs(x,y-1,cot+1);
	if((x+1)<=n&&flag[x+1][y]==0&&(map[x+1][y]!=map[x][y])) dfs(x+1,y,cot+1);
	if((y+1)<=n&&flag[x][y+1]==0&&(map[x][y+1]!=map[x][y])) dfs(x,y+1,cot+1);
	flag[x][y]=0;
}

int main()
{
	int i,j;
	cin>>n; 
	memset(flag,0,sizeof(flag));
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>map[i][j];
			if(map[i][j]=='A')
			{
				x1=i;y1=j;
			}
		}
	}
	dfs(x1,y1,0);
	
	if(mi==11111111)
		cout<<"-1"<<endl;
	else
		cout<<mi<<endl;

	return 0;
 } 
