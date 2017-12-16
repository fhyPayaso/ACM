#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn=100000+10;
int uf[maxn],f[maxn],flag;
void init()
{
	for(int i=1;i<=maxn;i++)
	uf[i]=i;
}

int dfs(int step)
{
	if(uf[step]==step)
		return step;
	else 
		uf[step]=dfs(uf[step]);
	return uf[step];
}

void ufind(int x,int y)
{
	int fx=dfs(x);
	int fy=dfs(y);
	if(fx!=fy) 
		uf[fy]=uf[fx];
	else
		flag=1;//x,y相连，且根节点相同，说明有环 
	return ;	
}

int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int x,y;
	init();
	flag=0;
	memset(f,0,sizeof(f));
	while(cin>>x>>y)
	{
		if(x==-1&&y==-1) break;
		
		if(x==0&&y==0)
		{
			
			int num=0;
			for(int i=1;i<=maxn;i++)
			{
				if(uf[i]==i&&f[i]==1)
				num++;
			}
			if(num>1) flag=1;
					
			if(!flag) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			
			init();
			flag=0;
			memset(f,0,sizeof(f));
			continue ;
		}
		else 
		{	
			ufind(x,y);
			f[x]=1;
			f[y]=1; 
		}
			
	}
	return 0;
}
