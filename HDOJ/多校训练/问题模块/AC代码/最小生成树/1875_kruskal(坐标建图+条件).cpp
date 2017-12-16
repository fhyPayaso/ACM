#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;
int ti,n,cnt;
double ans;
int uf[10010];

struct no
{
	int x,y;
}node[1010];

struct ed
{
	int a,b;
	double val;
}edge[10010];

bool cmp(const ed &a,const ed &b)
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


void ufind(int x,int y,double v)
{
	int fx=dfs(x);
	int fy=dfs(y);
	if(fx!=fy&&(v>=10&&v<=1000)) 
	{
		uf[fy]=fx;
		ans+=v;
	}
}

int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	cin>>ti;
	while(ti--)
	{
		cin>>n;
		
		for(int i=1;i<=n;i++)
		{
			cin>>node[i].x>>node[i].y;
			uf[i]=i;
		}
		
		cnt=0,ans=0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				cnt++;
				edge[cnt].a=i,edge[cnt].b=j;
				int dx=abs(node[i].x-node[j].x);
				int dy=abs(node[i].y-node[j].y);
				edge[cnt].val=sqrt(dx*dx+dy*dy);
			}	
		}
		
		sort(edge+1,edge+cnt+1,cmp);
		
		for(int i=1;i<=cnt;i++)
			ufind(edge[i].a,edge[i].b,edge[i].val);	
		
		int flag=0;
		for(int i=1;i<=n;i++)
			if(uf[i]==i) 
				flag++;		
		
		if(flag>1)
			cout<<"oh!"<<endl;
		else
			cout<<fixed<<setprecision(1)<<ans*100<<endl;
	}	
	return 0;
}
