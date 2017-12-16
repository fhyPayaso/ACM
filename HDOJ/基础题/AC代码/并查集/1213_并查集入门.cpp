#include<iostream>
using namespace std;
typedef long long ll;
const ll maxn=1000+10;
int ti,n,m,uf[maxn];

int dfs(int step)
{
	if(uf[step]==step)//查到祖宗节点直接返回 
		return step;
	else
		uf[step]=dfs(uf[step]);
	//路径压缩，即将这条路上的所有节点直接和祖宗节点相连，加快下次搜索速度 
	return uf[step];
}

void ufind(int x,int y)
{
	int fx=dfs(x);//找到x的祖宗节点fx 
	int fy=dfs(y);//找到y的组总结点fy 
	if(fx!=fy)	uf[fy]=fx;//如果不在一个集合，默认将fy的祖宗节点变为fx 
	
	return ;
}

int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	cin>>ti;
	while(ti--)
	{	
		int x,y,sum=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++) uf[i]=i;
		//将每个节点的祖宗节点设为自己 
		
		for(int i=1;i<=m;i++)
		{
			cin>>x>>y;		
			ufind(x,y);//因两个节点需在一个集合，开始合并 
		}
		
		for(int i=1;i<=n;i++)//最后判断有几个祖宗节点就有几个集合 
			if(uf[i]==i)
				sum++;
		cout<<sum<<endl;		
	}

	return 0;
}
