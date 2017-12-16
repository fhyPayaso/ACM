#include<iostream>
#include<cstring>
using namespace std;
int m,n,res[30],chu[30];//res用于储存结果，chu用于储存初始数据； 
void dfs(int dang,int kai)//dang代表当前组合情况的长度 
{
	int i;
	if(dang==m)//若长度符合要求 
	{
		for(i=0;i<m-1;i++)//则将该种方案输出即可 
		cout<<res[i]<<" ";
		cout<<res[i]<<endl;
		return;
	}
	for(i=kai;i<n;i++)
	{
		res[dang]=chu[i];//将初始数据未曾被使用的每一位数都尝试放入res结果的当前位置 
		dfs(dang+1,i+1);//向下一个位置进行深度搜索 
	}	
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) chu[i]=i+1;//将n个数从1~n存入数组当中； 
	dfs(0,0);
	return 0;
 } 
