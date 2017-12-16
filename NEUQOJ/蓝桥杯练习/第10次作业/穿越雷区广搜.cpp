#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
char map[105][105];
int flag[105][105];
int sum=0,x1,y1,x2,y2,n,mi=1111111;
int mo[2][4]={{-1,1,0,0},{0,0,-1,1}};

struct Node 
{  
    int x,y,cot;  
};  

bool check(int w,int r,int w1,int r1)
{
	if(w>n||r>n||w<1||r<1||map[w][r]==map[w1][r1])
		return false;
	return true; 
}

int bfs()
{
	Node now,next;
	queue<Node>Q;
	now.x=x1;
	now.y=y1;
	now.cot=0;
	Q.push(now);
	while(!Q.empty())
	{
		now=Q.front();
		Q.pop();
		if(now.x==x2&&now.y==y2)
		{
			if(mi>now.cot)
			mi=now.cot;
			return mi;
		} 
		for(int i=0;i<4;i++)
		{
			next.x=now.x+mo[0][i];
			next.y=now.y+mo[1][i];
			next.cot=now.cot+1;
			if(check(now.x,now.y,next.x,next.y)&&flag[now.x][now.y]==0)
			{
				flag[now.x][now.y]=1;
				Q.push(next);
				flag[now.x][now.y]=0;
			}
		}
	}
	return -1;
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
			else if(map[i][j]=='B')
			{
				x2=i;y2=j;
			}
		}
	}
	cout<<bfs()<<endl;
	return 0;
}
