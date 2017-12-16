#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int m,n,ans;
int flag[110][110],vis[110][110],from[110][110];
char a[110][110];

struct node
{
	int x,y,hp,time;
};

struct list
{
	int x,y;
}road[110*110];

queue <node > que;

int mov[2][4]={ 0, 0,1,-1,
				1,-1,0, 0};

int bfs()
{
	while(!que.empty()) que.pop();
	
	node now,next;
	now.x=0; now.y=0; now.hp=0; now.time=0;
	vis[0][0]=1;
	que.push(now);
	
	while(!que.empty())
	{
		now=que.front();
		que.pop();
		
		if(now.x==m-1&&now.y==n-1&&now.hp==0)
		{
			ans=now.time;
			return 1;
		}
		
		if(now.hp==0)
		{
			
			for(int i=0;i<4;i++)
			{
				int nx=now.x+mov[0][i];
				int ny=now.y+mov[1][i];
				if(nx>=0&&ny>=0&&nx<m&&ny<n&&vis[nx][ny]==0)
				{
					vis[nx][ny]=1;
					next.x=nx;
					next.y=ny;
					next.hp=flag[nx][ny];
					next.time=now.time+1;
					que.push(next);
					from[nx][ny]=i;
				}
			}
		}
		else
		{
			next.x=now.x;
			next.y=now.y;
			next.hp=now.hp-1;
			next.time=now.time+1;
			que.push(next);
		}
	}	
	
	return 0;
}

void print()
{
	
	int nowx=m-1,nowy=n-1;
	int cnt=0;
	while(1)
	{
		cnt++;
		road[cnt].x=nowx;
		road[cnt].y=nowy;
				
		if(nowx==0&&nowy==0)	break;
		
		int nextx=nowx-mov[0][from[nowx][nowy]];
		int nexty=nowy-mov[1][from[nowx][nowy]];
		
		nowx=nextx; nowy=nexty;
	}
	
	
	for(int i=1;i<=ans;i++)
	{
		cout<<i<<"s:";
		
		if(flag[road[cnt].x][road[cnt].y]==0)
		{	
			cout<<"("<<road[cnt].x<<","<<road[cnt].y<<")";
			cout<<"->";
			cout<<"("<<road[cnt-1].x<<","<<road[cnt-1].y<<")"<<endl;
			
			cnt--;
		}
		else
		{
			cout<<"FIGHT AT ("<<road[cnt].x<<","<<road[cnt].y<<")"<<endl;
			flag[road[cnt].x][road[cnt].y]--;
		}
	}
}


int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	while(cin>>m>>n)
	{
		memset(vis,0,sizeof(vis));
		memset(from,-1,sizeof(from));
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='X') 
				{
					flag[i][j]=-1;
					vis[i][j]=1;
				}
				else if(a[i][j]=='.') flag[i][j]=0;
				else flag[i][j]=a[i][j]-'0';
			}
		}
		
		if(bfs())
		{
			cout<<"It takes "<<ans;
			cout<<" seconds to reach the target position,";
			cout<<" let me show you the way."<<endl;
			print();	
		}
		else
			cout<<"God please help our poor hero."<<endl;
		
		cout<<"FINISH"<<endl;
	}
	
	return 0;
}
