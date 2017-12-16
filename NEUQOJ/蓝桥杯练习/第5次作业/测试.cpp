#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct room//定义结构体存储每组数据，代表每个房间 
{
	double mao,shu;//每个房间的兑换方式 
	double xjb;	// 由该种兑换方式得出的性价比（即用单位数量猫粮兑换的鼠粮） 
};
room food[100500];
bool cmp(const room &a,const room &b)
{
	return a.xjb>b.xjb;//为sort函数写出cmp函数，令性价比降序排列 
}
int main()
{
	
	int m,n,i;
	double best;
	while(~scanf("%d %d",&m,&n));
	{
		best=0;
		for(i=0;i<n;i++)
		{
			scanf("%f %f",&food[i].shu,&food[i].mao);//cin>>food[i].shu>>food[i].mao;//输入每个房间的数据并计算性价比 
			food[i].xjb=food[i].shu/food[i].mao;
		}
		sort(food,food+n,cmp);//性价比降序排列 
		
		for(i=0;i<n;i++)
		{
			if(m>=food[i].mao)//如果剩余猫粮足够进行全部兑换 
			{
				best+=food[i].shu;//鼠粮累增 
				m-=food[i].mao;//猫粮累减 
			}
			else//否则进行百分比（即剩余猫粮与性价比的积）兑换然后跳出 
			{
				best+=m*food[i].xjb;
				break;
			}
		}
		cout<<fixed<<setprecision(3)<<best<<endl;//固定三位小数输出即可 
	}
	return 0;
}

