#include<iostream>
using namespace std;
typedef long long ll;
const ll maxn=1000+10;
int uf[maxn];


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
	if(fx!=fy) uf[fy]=fx;
	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int n,m,x,y;
	while(1)
	{
		cin>>n;	if(!n) break; 
		cin>>m;
		
		for(int i=1;i<=n;i++) uf[i]=i;
		
		for(int i=1;i<=m;i++)
		{
			cin>>x>>y;
			ufind(x,y);
		}
		int sum=0;
		
		for(int i=1;i<=n;i++)
			if(uf[i]==i)
				sum++;
		cout<<sum-1<<endl;		
	}
	
	return 0;
}
