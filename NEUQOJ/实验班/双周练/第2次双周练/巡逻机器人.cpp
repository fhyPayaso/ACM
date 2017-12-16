#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int mx,my,k,res;
int map[25][25],flag[25][25][25];
int mov[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
struct p
{
	int x,y,knum,step;
};
void bfs()
{
	p now,next;
	queue<p> que;
	now.x=1;
	now.y=1;
	now.knum=0;
	now.step=0;
	que.push(now);
	flag[1][1][0]=1;
	
	while(!que.empty())
	{
		now=que.front();
		que.pop();
		for(int i=0;i<4;i++)
		{
			int nx=now.x+mov[i][0];
			int ny=now.y+mov[i][1];
			
			next.x=nx; next.y=ny; next.step=now.step+1;
			if(map[nx][ny]==1)
				next.knum=now.knum+1;
			else 
				next.knum=0;	
			if(flag[nx][ny][next.knum]==1||nx<1||ny<1||nx>mx||ny>my)
				continue;
			if(next.knum>k)
				continue;
				 
			if(nx==mx&&ny==my)
			{
				res=next.step;
				return ;
			}
			flag[nx][ny][next.knum]=1;
			que.push(next);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>mx>>my>>k;
		
		for(int i=1;i<=mx;i++)
			for(int j=1;j<=my;j++)
			cin>>map[i][j];
		if(mx==1&&my==1)
		{
			cout<<0<<endl;
			continue ;
		}
		memset(flag,0,sizeof(flag));
		res=0;
		bfs();
		if(res)
			cout<<res<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
 } 
