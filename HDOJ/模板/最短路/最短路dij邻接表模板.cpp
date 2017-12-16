//复杂度 O(nlogn)  HDU1874
//邻接表加优先队列 
#include<iostream>
#include<queue>
#include<cstring> 
using namespace std;
const int inf=1<<30;
const int maxn=1010;

int head[maxn],dis[maxn],flag[maxn];
int cnt;
struct Edge
{
	int from,to;
	int val,next;
}edge[maxn*2];

struct node
{
	int point,len;
	
	bool operator < (const node &a) const
	{
		return  len > a.len;
	}
};

priority_queue <node > que;

void addedge(int u,int v,int w)
{
	edge[cnt].from=u;
	edge[cnt].to=v;
	edge[cnt].val=w;
	edge[cnt].next=head[u];
	head[u]=cnt;
	cnt++;
}

void init(int n,int m)
{
	int u,v,w; 
	cnt=0;
	memset(head,-1,sizeof(head));
	memset(flag,0,sizeof(flag));
	for(int i=0;i<n;i++)	dis[i]=inf;

	for(int i=0;i<m;i++)
	{
		cin>>u>>v>>w;
		addedge(u,v,w);
		addedge(v,u,w);
	}
}

int dijkstra(int n,int s)
{
	
	flag[s]=1;
	dis[s]=0;
	
	node temp;	
	temp.point=s; 
	temp.len=0;	
	que.push(temp);
	
	int pre=s; 
	for(int i=1;i<n;i++)
	{
		
		for(int j=head[pre] ; j!=-1 ; j=edge[j].next)
		{
			int nex=edge[j].to;
			if(!flag[nex]&&dis[pre]+edge[j].val<dis[nex])
			dis[nex]=dis[pre]+edge[j].val;
			
			temp.point=nex; temp.len=dis[nex];
			que.push(temp);
		}
		
		while(!que.empty()&&flag[(que.top()).point]==1) que.pop();
		
		if(que.empty()) break;
		
		temp=que.top();
		que.pop();
		pre=temp.point;
		flag[pre]=1;
		
	}	
}

int main()
{
	
	//freopen("in.txt","r",stdin);
	int s,e,n,m;
	while(cin>>n>>m)
	{
		init(n,m);
		cin>>s>>e;
		dijkstra(n,s);
		if(dis[e]==inf) cout<<-1<<endl;
		else cout<<dis[e]<<endl; 
	}
	return 0;
}

