#include<iostream>
#include<queue>
using namespace std;
char map[105][105];
int num,h,l;
int mov[8][2]={{1,0},{0,1},{-1,0},{0,-1},
				{1,1},{1,-1},{-1,1},{-1,-1}};	
struct point {int x,y; };
			
void bfs(point n)
{
	queue <point> q;
	q.push(n);
	point now,next;
	while(!q.empty())
	{
		now=q.front();
		q.pop();
		map[now.x][now.y]='*';
		
		for(int t=0;t<8;t++)
		{
			int nx=now.x+mov[t][0];
			int ny=now.y+mov[t][1];
			
			if(map[nx][ny]=='@')
			{
				next.x=nx;
				next.y=ny;
				q.push(next);
			}
		}	
	} 
}


int main()
{
	while(cin>>h>>l)
	{
		if(!h&&!l)
		break;
		
		for(int i=1;i<=h;i++)
			for(int j=1;j<=l;j++)
				cin>>map[i][j];
		num=0;		
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=l;j++)
			{
				if(map[i][j]=='@')
				{
					point temp;
					temp.x=i;temp.y=j;
					bfs(temp);
					num++;
				}
			}
		}
		cout<<num<<endl;
	}
	return 0;
} 
