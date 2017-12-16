#include<iostream>
#include<queue>
#include<cstring>
using namespace std;  
struct Node  
{  
    int x,y;  
};  
  
char mp[555][555];  
int vis[555][555];  
int dir[4][2]={1,0,-1,0,0,1,0,-1};  
int n,m,sx,sy,tx,ty;  
  
bool isok(int x,int y)  
{  
    if (x>=1&&x<=n&&y>=1&&y<=m) return true;  
    return false;  
}  
  
bool bfs()  
{  
    Node st,now;  
    queue<Node>Q;  
    st.x=sx,st.y=sy;  
    vis[sx][sy]=1;  
    Q.push(st);  
    while (!Q.empty())  
    {  
        st=Q.front();  
        Q.pop();  
        if (vis[tx][ty]>=2)  
            return true;  
        for (int i=0;i<4;i++)  
        {  
            now.x=st.x+dir[i][0];  
            now.y=st.y+dir[i][1];  
            if (isok(now.x,now.y)&&((mp[now.x][now.y]!='X'&&!vis[now.x][now.y])||(now.x==tx&&now.y==ty)))  
            {  
                Q.push(now);  
                vis[now.x][now.y]++;  
            }  
        }  
    }  
    return false;  
}  
  
int main()  
{   
    int i,j;  
    while (~scanf("%d%d",&n,&m))  
    {  
        memset(vis,0,sizeof(vis));  
        for (i=1;i<=n;i++)  
        {  
            scanf("%s",mp[i]+1);  
            for (j=1;j<=m;j++)  
                if (mp[i][j]=='X') vis[i][j]++;  
        }  
        scanf("%d%d%d%d",&sx,&sy,&tx,&ty);  
        if (bfs()) printf("YES\n");  
        else printf("NO\n");  
    }  
    return 0;  
}  


