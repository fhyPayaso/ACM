#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
struct no { int x,y; } node[510];
int flag[600][600];
int main()
{
	//freopen("1011.in","r",stdin);
	int n;
	while(cin>>n)
	{
		int a,b;
		memset(flag,0,sizeof(flag));
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			a+=100;b+=100;
			node[i].x=a;
			node[i].y=b;
			flag[a][b]=1;
		}
		
		int sum=0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				int ax,ay,bx,by;
				ax=node[i].x;ay=node[i].y;
				bx=node[j].x;by=node[j].y;
				
				int dx=ay-by;
				int dy=bx-ax;
				
				if(ax+dx>-1&&ay+dy>-1&&bx+dx>-1&&by+dy>-1&&flag[ax+dx][ay+dy]&&flag[bx+dx][by+dy]) sum++;
				if(ax-dx>-1&&ay-dy>-1&&bx-dx>-1&&by-dy>-1&&flag[ax-dx][ay-dy]&&flag[bx-dx][by-dy]) sum++;	

			}	
		}	
		cout<<sum/4<<endl;
	}
	
	return 0;
}

