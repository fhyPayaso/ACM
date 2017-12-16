#include<iostream>
#include<queue>
#include<string>
#include<cstring>
using namespace std;
int cx,cy,mx,my,res;
int map[10][10];
int mov[8][2]={{1,2},{1,-2},{-1,2},{-1,-2},
			   {2,1},{-2,1},{2,-1},{-2,-1}};
struct p
{
	int x,y,step;
};
void bfs()
{
	p now,next;
	queue<p> que;
	now.x=cx;
	now.y=cy;
	now.step=0;
	map[cx][cy]=1;
	que.push(now);
	
	while(!que.empty())
	{
		now=que.front();
		que.pop();
		
		for(int i=0;i<8;i++)
		{
			int nx=now.x+mov[i][0];
			int ny=now.y+mov[i][1];
			
			if(nx<1||ny<1||nx>8||ny>8||map[nx][ny]==1)
				continue;
			else if(nx==mx&&ny==my)
			{
				res=now.step+1;
				return ;
			}
			next.x=nx;
			next.y=ny;
			next.step=now.step+1;
			map[nx][ny]==1;
			que.push(next);
			
		}	
	}
}
int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		if(s1==s2)
		{
			cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<0<<" knight moves."<<endl;
			continue;
		}
		cx=s1[1]-'0';
		cy=s1[0]-'a'+1;
		mx=s2[1]-'0';
		my=s2[0]-'a'+1;
		memset(map,0,sizeof(map));
		bfs();
		cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<res<<" knight moves."<<endl;
	}
	return 0;
}
