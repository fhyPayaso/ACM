#include<iostream>
#include<cstring>
using namespace std;
int val[110][110],flag[110];
int dis[110],j;

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int n,m;
	while(cin>>m>>n)
	{
		if(!m) break;
		
		memset(val,-1,sizeof(val));
		memset(flag,0,sizeof(flag));
		for(int i=1;i<=m;i++)
		{
			int a,b,v;
			cin>>a>>b>>v;
			val[a][b]=v;
			val[b][a]=v;
		}
		int num=1,sum=0;
		flag[1]=1;
		
		for(int i=2;i<=n;i++)
		dis[i]=val[1][i];
		
		while(num<n)
		{
			int minn=99999999;
			j=-1;
			for(int i=1;i<=n;i++)
			{
				if(minn>dis[i]&&flag[i]==0&&dis[i]!=-1)
				minn=dis[i],j=i;
			}
			
			if(j==-1) break;
			
			flag[j]=1; num++; sum+=minn;
			
			for(int i=1;i<=n;i++)
			{
				if(flag[i]==0&&val[j][i]!=-1&&(dis[i]>val[j][i]||dis[i]==-1))
				dis[i]=val[j][i];
			}
		}
		if(j==-1)
			cout<<"?"<<endl;
		else
			cout<<sum<<endl;
	}
	return 0;
} 
