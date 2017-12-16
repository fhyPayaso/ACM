#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn=100000+10;
int uf[maxn],f[maxn],flag,du[maxn];
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
	
	int x,y,ti=1;
	init();
	flag=0;
	memset(f,0,sizeof(f));
	memset(du,0,sizeof(du));
	while(cin>>x>>y)
	{
		if(x==-1&&y==-1) break;
		
		if(x==0&&y==0)
		{
			
			int num1=0,num2=0;
			for(int i=1;i<=maxn;i++)
			{
				if(uf[i]==i&&f[i]==1)
				num1++;
				
				
				//与判断回路不同，除根节点入度为0外，树的节点入度都为1
				//即出现的节点种有且只有一个节点入度不为1 
				if(du[i]!=1&&f[i]==1) 
				num2++;
			}
			if(num1>1||num2>1) flag=1;
					
			cout<<"Case "<<ti++;
			if(!flag) cout<<" is a tree."<<endl;
			else cout<<" is not a tree."<<endl;
			
			init();
			flag=0;
			memset(f,0,sizeof(f));
			memset(du,0,sizeof(du));
			continue ;
		}
		else 
		{	
			ufind(x,y);
			f[x]=1;
			f[y]=1; 
			du[y]++;
		}
			
	}
	return 0;
}
