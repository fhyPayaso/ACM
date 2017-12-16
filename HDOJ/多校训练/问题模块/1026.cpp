#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int n,m,flag[110][110],from[110][110],tim;
char a[110][110];

int mov[2][4]={1,-1,0,0,
			   0,0,1,-1};

struct node
{
	int x,y,time;
	friend bool operator < (node a, node b)
	{
		return a.time>b.time;//time小的优先级高 
	}
}road[110*110];

priority_queue <node > Q;

int bfs()
{
	node temp;
	temp.x=0; temp.y=0; temp.time=0;
	Q.push(temp);
	flag[0][0]=1;
	road[1]=temp;
	int step=0;
	while(!Q.empty())
	{
		node now,next;
		now=Q.top();
		Q.pop();
		
		if(step==0)		road[++step]=now;
		else if(now.x==road[step].x||now.y==road[step].y) road[++step]=now;
		
		if(now.x==n-1&&now.y==m-1) 
		return now.time;
		
		for(int i=0;i<4;i++)
		{
			int nx=now.x+mov[0][i];
			int ny=now.y+mov[1][i];
			
			if(nx>=0&&nx<n&&ny>=0&&ny<m&&flag[nx][ny]==0)
			{
				flag[nx][ny]=1;
				next.x=nx; next.y=ny;
				if('1'<=a[nx][ny]&&a[nx][ny]<='9') next.time=now.time+(a[nx][ny]-'0')+1;
				else   next.time=now.time+1;
				
				from[nx][ny]=i;
				Q.push(next);
			}	
		}
	}
	return 0;
}

void print(int x,int y)
{
	int nx,ny;
	if(x==0&&y==0) return ;
	
	nx=x-mov[0][from[x][y]];
	ny=y-mov[1][from[x][y]];
	
	print(nx,ny);
	printf("%ds:(%d,%d)->(%d,%d)\n",tim++,nx,ny,x,y);  
	int cnt=a[x][y]-'0';
	while(cnt--)
	printf("%ds:FIGHT AT (%d,%d)\n",tim++,x,y);
	
}


int main()
{
	freopen("in.txt","r",stdin);
	
	while(cin>>n>>m)
	{
		memset(flag,0,sizeof(flag));
		memset(from,0,sizeof(from));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='X')
				flag[i][j]=1;
			}
		}
		int ans=bfs();
		tim=0;
		if(ans)	 cout<<"It takes "<<ans<<" seconds to reach the target position, let me show you the way."<<endl;
		else 	 cout<<"God please help our poor hero."<<endl;
		print(n-1,m-1);
		cout<<"FINISH"<<endl;
	}
	return 0;
}
