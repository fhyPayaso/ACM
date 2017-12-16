#include<iostream>
#include<cstring>
using namespace std;
const int maxn=20000+100;
int flag[maxn],color[maxn],bi;
int pre[maxn]; //pre[i]代表从i节点发出的最后一条边的序号 
int cnt,sum[maxn],size[maxn];
/*
 * sum[i] 是一个维护的数组，表示当前i颜色的此时i颜色为子树的根的子树的大小；
 * size[i]代表i号节点的子树的节点数量;
 */
struct node
{
	int to;//这条边结尾指向节点的序号 
	int next;//下一条边的序号 
}edge[maxn*2];

void addedge(int from,int to)//出发节点，指向节点 
{
	edge[bi].to=to;//第bi条边指向to 
	edge[bi].next=pre[from];//这条边的下一条边为出发节点伸出的另一条边，若没有则为-1； 
	pre[from]=bi;//这条边已经建立，出发节点发出的第一条边就是边bi 
	bi++;//准备建立下一条边 
}

void dfs(int now,int old)
{
	size[now]=1;
	int all=0;
	int last=sum[color[now]];
	for(int i=pre[now];i!=-1;i=edge[i].next)
	{
		int point=edge[i].to; 
		if(point==old) continue;
		dfs(to,now);
		size[now]+=size[to];
		
		
		
		
		
		
		
	}
} 


int main()
{
	while(cin>>n)
	{
		memset(flag,0,sizeof(flag));
		memset(pre,-1,sizeof(re));
		memset(color,0,sizeof(color));
		memset(sum,0,sizeof(sum));
		
		int num=0;
		for(int i=1;i<=n;i++)
		{
			cin>>color[i];//输入第i个节点颜色 
			if(flag[color[i]]==0)//如果该颜色没有出现过，颜色总数加一 
			{
				num++;
				flag[color[i]]=1;
			}	
		}
		bi=0;
		for(int i=1;i<=n;i++)
		{
			int x,y;
			cin>>x>>y;
			addedge(x,y);
			addedge(y,x);
		} 
		
		dfs(1,1);
		
		
		cout<<"Case "<<++x<<": "<<endl;
	}
	
	
	return 0;
}
