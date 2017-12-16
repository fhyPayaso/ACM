#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
char map[32][32][32];
int flag[32][32][32];
int rh,rn,rm,res;
int l,x,y,k,i,j;
int nh,nn,nm,f;
int mov[6][3]=
{
	{1,0,0}, 
	{-1,0,0}, 
	{0,1,0}, 
	{0,-1,0}, 
	{0,0,1}, 
	{0,0,-1} 
};
struct pos
{
	int h,n,m;
	int time;
};
void bfs()
{
	queue<pos> que;
	pos ru,chu;
	ru.h=rh;ru.m=rm;ru.n=rn; 
	ru.time=0;
	que.push(ru); 
	
	while(!que.empty())
	{
		pos now=que.front();
		que.pop();
		flag[now.h][now.n][now.m]=1;
		for(i=0;i<6;i++)
		{
			nh=now.h+mov[i][0];
			nn=now.n+mov[i][1];
			nm=now.m+mov[i][2];
			f=0;
			
			if(nh<1||nn<1||nm<1||nh>l||nn>x||nm>y) f=1;
			else if(map[nh][nn][nm]=='#')  f=1;
			else if(flag[nh][nn][nm]==1) f=1;
			else if(map[nh][nn][nm]=='E')
			{
				res=now.time+1;
				return ;
			}
			
			if(f==1)
				continue;
			else
			{
				flag[nh][nn][nm]=1;
				pos next;
				next.h=nh;
				next.n=nn;
				next.m=nm;
				next.time=now.time+1;
				
				que.push(next);
			}	
		}	
	}
}

int main()
{
	
	while(cin>>l>>x>>y)
	{
		if(!l&&!x&&!y)
		break;
		
		for(k=1;k<=l;k++)
			for(i=1;i<=x;i++)
				for(j=1;j<=y;j++)
				{
					cin>>map[k][i][j];
					if(map[k][i][j]=='S')
					{
						rh=k;rn=i;rm=j;
					}
				}
		memset(flag,0,sizeof(flag));			
		res=0;			
		bfs();
		if(res)
			cout<<"Escaped in "<<res<<" minute(s)."<<endl;
		else
			cout<<"Trapped!"<<endl;
	}
	return 0;
}
