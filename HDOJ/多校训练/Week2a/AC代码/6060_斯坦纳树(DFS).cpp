#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=1000000+50;
int bi,n,k,pre[maxn*2],size[maxn];
unsigned long long ans;
struct node
{
	int nextnode;
	int nextedge;
	int val;
}edge[maxn*2];


void addedge(int from,int to,int w)
{
	edge[bi].nextnode=to;
	edge[bi].nextedge=pre[from];//这条边的下一条边为出发节点伸出的另一条边，若没有则为-1；
	edge[bi].val=w;
	pre[from]=bi;//这条边已经建立，出发节点发出的第一条边就是边bi
	bi++;
}

void dfs(int now,int old)
{
	size[now]=1;
	for(int i=pre[now];i!=-1;i=edge[i].nextedge)
	{
		int point =edge[i].nextnode;
		if(point==old) continue;
		dfs(point ,now);
		size[now]+=size[point];
		
		long long m=size[point]<k?size[point]:k;
		//用min函数无限WA，改成三目运算符AC？？？ 
		ans+=m*edge[i].val;
	}
}

int main()
{
	//freopen("in.txt","r",stdin);
	while(~scanf("%d %d ",&n,&k))
	{
		memset(pre,-1,sizeof(pre));
		bi=0,ans=0;
		for(int i=1;i<n;i++)
		{
			int a,b,w;
			scanf("%d %d %d",&a,&b,&w);
			addedge(a,b,w);
			addedge(b,a,w);
		}
		dfs(1,-1);
		cout<<ans<<endl;
	}
	return 0;
}
