#include<iostream>
#include<string>
#include<cstring>
#include<queue>
using namespace std;
string temp;
char tem;
int flag[15][15][15],step[15][15][15];
int n,nz,nx,ny,ez,ex,ey,ans;

int mov[3][6]={ 1,-1, 0, 0, 0, 0,
				0, 0, 1,-1, 0, 0,
				0, 0, 0, 0, 1,-1 };

struct node
{
	int z,x,y;
};

queue <node > que;

int bfs()
{
	node now,next;
	now.z=nz; now.x=nx; now.y=ny;
	que.push(now);
	
	while(!que.empty())
	{
		now=que.front();
		int noz=now.z,nox=now.x,noy=now.y;
		que.pop();
		
		if(noz==ez&&nox==ex&&noy==ey)
		{
			ans=step[ez][ex][ey];
			return 1;
		}	
		
		
		if(flag[noz][nox][noy]==0||(noz==nz&&nox==nx&&noy==ny))
		{
			flag[noz][nox][noy]=1;
			
			for(int i=0;i<6;i++)
			{
				int zz=noz+mov[0][i];
				int xx=nox+mov[1][i];
				int yy=noy+mov[2][i];
				
				if(zz>=0&&xx>=0&&yy>=0&&zz<n&&xx<n&&yy<n)
				{
					next.z=zz; next.x=xx; next.y=yy;
					step[zz][xx][yy]=step[noz][nox][noy]+1;
					que.push(next);
				}
			}		
		}
	}
	return 0;
}


int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	while(cin>>temp)
	{
		cin>>n;
		
		memset(flag,0,sizeof(flag));
		memset(step,0,sizeof(step));
		for(int k=0;k<n;k++)
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
				{
					cin>>tem;
					if(tem=='X')
					flag[k][i][j]=1;
				}	
		
		cin>>nz>>nx>>ny;
		cin>>ez>>ex>>ey;
		
		if(bfs()) cout<<n<<" "<<ans<<endl;
		else	  cout<<"NO ROUTE"<<endl;
		cin>>temp;
	}
	
	return 0;
}
