#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int m,n,ans;
int flag[110][110];

int mov[2][8]={ -1,-1,-1, 0, 0, 1, 1, 1,
				-1,	0, 1,-1, 1,-1, 0, 1	};

struct node
{
	int x,y;
};

queue <node> que;

void putin()
{
	memset(flag,-1,sizeof(flag));
	char temp;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>temp;
			if(temp=='*') flag[i][j]=1;
			else flag[i][j]=0;
		}	
	}
}

void bfs(int i,int j)
{
	while(!que.empty()) que.pop();
	
	node now,next;
	now.x=i; now.y=j;
	flag[i][j]=1;
	que.push(now);
	
	while(!que.empty())
	{
		now=que.front();
		que.pop();
				
		for(int i=0;i<8;i++)
		{
			int nx=now.x+mov[0][i];
			int ny=now.y+mov[1][i];
			
			if(nx>=1&&nx<=m&&ny>=1&&ny<=n&&flag[nx][ny]==0)
			{
				next.x=nx; next.y=ny;
				flag[nx][ny]=1;
				que.push(next);
			}
		}
	}
	ans++;
}




int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	while(cin>>m>>n)
	{
		if(!m) break;
		
		putin();
		ans=0;
			
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				if(flag[i][j]==0)
					bfs(i,j);
		
		cout<<ans<<endl;
	}
	return 0;
 } 
