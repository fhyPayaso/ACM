#include<iostream>
#include<queue>
#include<cstring>
using namespace std;  
struct Node //定义结构体，存放点的横纵坐标； 
{  
    int x,y;  
};  
  
char mp[555][555];//用于输入并存放地图；  
int vis[555][555];//用于标记破碎情况；  
int dir[4][2]={1,0,-1,0,0,1,0,-1};//将移动情况打表,对应(x,y)的移动(1,0),(0,1),(-1,0),(0,-1)即下右上左；  
int n,m,sx,sy,tx,ty;  
  
bool isok(int x,int y)//判断没有走出边界；  
{  
    if (x>=1&&x<=n&&y>=1&&y<=m) return true;  
    return false;  
}  
  
bool bfs()//广度优先搜索  
{  
    Node st,now;  
    queue<Node>Q;//定义队列，数据类型为定义好的结构体，用于存放分支点  
    st.x=sx,st.y=sy;//给起点赋初值  
    vis[sx][sy]=1;//该点的冰变为破碎的  
    Q.push(st);//将该点放入队尾【q.push(x)代表将X接到队列的末端】  
    while (!Q.empty())//当队列不为空，即还有下一层结点没有搜索【q.empty()当队列为空的时候返回true】  
    {  
        st=Q.front();//从队首开始搜索【q.front为返回队首元素，即最早被压入队列的元素】  
        Q.pop();//搜索后要清除该节点【q.pop()代表弹出队首元素，但是并不会返回该值】  
        if (vis[tx][ty]>=2)//代表第二次踩到终点，破碎的冰完全碎掉，即可以到达终点  
            return true;  
        for (int i=0;i<4;i++)//4次循环代表向上下左右4个方向移动  
        {  
            now.x=st.x+dir[i][0];//由上一步的位置移动到当前位置；  
            now.y=st.y+dir[i][1];  
            if (isok(now.x,now.y)&&((mp[now.x][now.y]!='X'&&!vis[now.x][now.y])||(now.x==tx&&now.y==ty)))
			//首先保证当前位置没有走出边界，同时保证（1.当前冰不是破碎冰并且没有被踩过。或者 2.当前点为终点）
			//若不满足则直接说明会从当前位置掉落，所以不用保留结点入队  
            {  
                Q.push(now);//将当前位置入队  
                vis[now.x][now.y]++;//证明走过一次该点  
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
        }  //输入地图并将破碎的冰做好标记； 
        scanf("%d%d%d%d",&sx,&sy,&tx,&ty);  //输入起点和终点； 
        if (bfs()) printf("YES\n");  
        else printf("NO\n");  
    }  
    return 0;  
}  


