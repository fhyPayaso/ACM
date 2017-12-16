#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	//hei[]记录炮弹数值，len[]记录当前情况最优解 
	int temp,n=0,i,j,hei[25],len[25],lm,max=-1;
	while(scanf("%d",&temp)!=EOF)
	{
		hei[n]=temp;
		n++;
	}
	
	
	memset(len,0,sizeof(len));
	
	//每次新加一个导弹，由之前结果推出本次最优解 
	for(i=0;i<n;i++)
	{
		len[i]=1;//至少拦下一枚 
		//让新导弹与之前所有导弹进行比较 
		for(j=0;j<i;j++)
		{
			//如果比之前某一枚导弹低 
			if(hei[i]<=hei[j])
			{
				//将该枚导弹状态下的最优解len[j]长度加一，存在临时变量中 
				lm=len[j]+1;
				//如果该状态比len[i]长,就将临时变量的值赋给len[i] 
				if(lm>len[i])
				len[i]=lm;
			}	
		}
		//内层循环结束，len[i]为当前位置最优解 
	}
	//循环结束，len[]应该是所有位置的最优解
	//输出最优解中最大的数 
	for(i=0;i<n;i++)
	{
		if(max<len[i])
		max=len[i];
	}
	
	cout<<max;
	
	return 0;
}
