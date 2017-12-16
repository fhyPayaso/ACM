#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll maxn=5000+50;
int uf[maxn],ans,n;
struct road
{
	int x,y,val;
}edge[maxn];

bool cmp(const road &a,const road &b)
{
	return a.val<b.val;
}

int dfs(int step)
{
	if(uf[step]==step)
		return step;
	else
		uf[step]=dfs(uf[step]);
	return uf[step];
}

void ufind(int x,int y,int i)
{
	int fx=dfs(x);
	int fy=dfs(y);
	if(fx!=fy) 
	{
		uf[fy]=fx;
		ans+=edge[i].val;
	}
}

int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	while(cin>>n)
	{
		if(!n) break;
		ans=0;
		int x=(n-1)*n/2;
		
		for(int i=1;i<=x;i++)
		{
			cin>>edge[i].x>>edge[i].y>>edge[i].val;
			uf[i]=i;
		}	
		
		sort(edge+1,edge+x+1,cmp);
		
		for(int i=1;i<=x;i++)
			ufind(edge[i].x,edge[i].y,i);

		cout<<ans<<endl;		
	}
	
	return 0;
}
