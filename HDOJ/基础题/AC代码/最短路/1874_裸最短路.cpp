//dijkstra  O(n^2)模板 
#include<iostream>
#include<cstring>
using namespace std;
int n,m,beg,en;
int road[300][300];
int dis[300],flag[300];
const int inf=1<<30;


void dijkstra(int b,int e)
{
	
	memset(flag,0,sizeof(flag));
		
	flag[b]=1; 
	dis[b]=0;
		
	for(int i=0;i<n;i++)
		dis[i]=road[b][i];
		
	for(int j=1;j<n;j++)
	{
		int minn=inf,pos;
		for(int i=0;i<n;i++)
		{
			if(dis[i]<minn&&!flag[i])
			{
				minn=dis[i];
				pos=i;
			}	
		}
			
		flag[pos]= 1;
		for(int i=0;i<n;i++)
		{
			if(!flag[i]&&dis[i]>dis[pos]+road[pos][i])
			dis[i]=dis[pos]+road[pos][i];
		}
	}			
}

int main()
{
	
	//freopen("in.txt","r",stdin);
	while(cin>>n>>m)
	{
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				road[i][j]=inf;
			road[i][i]=0; 	
		}
		
		int u,v,w;	
		for(int i=1;i<=m;i++)
		{
			cin>>u>>v>>w;
			if(w<road[u][v])//防止u==v的情况 
			road[u][v]=road[v][u]=w;
		}
		cin>>beg>>en;
		dijkstra(beg,en);
		
		if(dis[en]!=inf)
			cout<<dis[en]<<endl;
		else 
			cout<<-1<<endl;		
	}
	
	return 0;
}
