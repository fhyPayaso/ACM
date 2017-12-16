#include<iostream>
#include<cstring>
using namespace std;
int a[20][20],res;
int n,m,x,y;
void dfs(int i,int j)
{
	if(i==n&&j==m)//横纵坐标均顺利达到终点，将结果加一 
	{
		res++;
		return ;
	}
	if(a[i][j]||i>n||j>m) return ;//如果遇到马或者进入马的控制范围 或者 已经走出边界则直接返回，不进行下一步搜索 
	
	dfs(i+1,j);//向下走一步 
	dfs(i,j+1);//向右走一步 
	return ;
}
int main()
{
	
	while(cin>>n>>m>>x>>y)
	{
		memset(a,0,sizeof(a));
		res=0;
		n+=2;m+=2;x+=2;y+=2;//为了避免数组越界，将所有点向右下角平移两个单位 
		a[x][y]=1;//将马所在的位置和所控制的区域全部标记为1，无法通过 
		a[x-2][y+1]=1;
		a[x-2][y-1]=1;  
        a[x-1][y+2]=1;
		a[x-1][y-2]=1;  
        a[x+1][y+2]=1;
		a[x+1][y-2]=1;  
        a[x+2][y+1]=1;
		a[x+2][y-1]=1;  
		dfs(2,2);//以(2,2)点作为起点开始搜索 
		cout<<res<<endl;
	}

	return 0;
}
