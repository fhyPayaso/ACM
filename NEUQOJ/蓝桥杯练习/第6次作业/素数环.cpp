#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int n,ssh[20];
int flag[20];//标记数字是否被用过 
int su(int x)//判断是否为质数的函数 
{
	int i;
	if(x<3) return 0;
	
	for(i=2;i<=sqrt(x);i++)
	if(x%i==0) return 0;

	return 1;
}
void dfs(int t)
{
	int i,j;
	if(t==n&&su(ssh[0]+ssh[n-1]))//长度符合且首尾相加为素数成立 
	{
		for(i=0;i<n;i++)//则直接输出该种情况 
		cout<<ssh[i]<<" ";
		cout<<endl;
		return ;
	}
	else
	{
		for(j=2;j<=n;j++)//从2开始向n循环； 
		{
			if(!flag[j]&&su(j+ssh[t-1]))//如果这个数没有被用过且满足与上一位数字的和为素数 
			{
				ssh[t]=j;//则将这个数放在素数环的当前位置 
				flag[j]=1;//该数使用过，做好标记 
				dfs(t+1);//向下一个位置继续搜索 
				flag[j]=0;//返回之后取消标记，开始新的循环 
			}
		}
	}
}
int main()
{
	int i;
	cin>>n;
	
	if(n%2!=0)//如果n为奇数，则一定不能形成素数环(1的情况额外考虑) 
	//因为这种情况下，奇数和偶数必然相邻，首尾都是奇数，相加为偶数不符合题意 
	{
		if(n==1)
		cout<<1;
		else
		cout<<"No";
		return 0;
	}
	memset(flag,0,sizeof(flag));
	for(i=0;i<n;i++)
	ssh[i]=i+1;//先将初始数据按顺序放入素数环 
	dfs(1);
	return 0;
 } 
