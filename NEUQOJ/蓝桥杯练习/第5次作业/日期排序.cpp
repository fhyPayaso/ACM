#include<iostream>
using namespace std;
struct date//定义结构体日期用于储存年月日，a,b,则是没什么用的正斜杠 
{
	int year,mounth,day;
	char a,b;
};
bool cmp(struct date a,struct date b)
{
	if(a.year>b.year) return true;//先比较年份 
	else if(a.year<b.year) return false;
	else 
	{
		if(a.mounth>b.mounth) return true;//然后是月份 
		else if(a.mounth<b.mounth) return false;
		else
		{
			if(a.day>b.day) return true;//最后是日期 
			else return false;
		}
	}
}

int main()
{
	int n,j,i=0;
	date ri[1000],temp;
	while(scanf("%d%c%d%c%d",&ri[i].mounth,&ri[i].a,&ri[i].day,&ri[i].b,&ri[i].year)!=EOF) i++;//每组日期按照月日年输入，并记录组数 
	n=i;
	for(i=0;i<n;i++)//简单冒泡 
	{
		for(j=0;j<n-i-1;j++)
		{
			if(cmp(ri[j],ri[j+1]))//根据写好的cmp函数进行升序排列 
			{
				temp=ri[j];
				ri[j]=ri[j+1];
				ri[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	printf("%02d/%02d/%d\n",ri[i].mounth,ri[i].day,ri[i].year);//右对齐两位数，不足则用0补齐 
	
	return 0;
}
