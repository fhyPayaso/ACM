#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector <int > edge[1010];
bool vis[1010],flag[1010][1010];
int pos;


//对每个点来说 把该点能直接到达的点标记
//最后任意两个点至少有一条路才成立 

void dfs(int from)
{
	vis[from]=true;
	flag[pos][from]=true;
	for(int i=0;i<edge[from].size();i++)
	{
		int to=edge[from][i];
		if(vis[to]) continue;
		dfs(to);
	}
	
	return ;
}


int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int ti,n,m;
	cin>>ti;
	while(ti--)
	{
		cin>>n>>m;
		
		for(int i=1;i<=n;i++) edge[i].clear();
		
		
		int u,v;
		for(int i=1;i<=m;i++)
		{
			cin>>u>>v;
			edge[u].push_back(v);
		}
		
		memset(flag,false,sizeof(flag));
		for(int i=1;i<=n;i++)
		{
			memset(vis,false,sizeof(vis));
			pos=i;
			dfs(i);
		}
		
		int f=0;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				if(!flag[i][j]&&!flag[j][i])
						{	f=1; break;	}
					
		if(f) cout<<"Light my fire!"<<endl;		
		else  cout<<"I love you my love and our love save us!"<<endl;		
		
	}
	
	return 0;
}
