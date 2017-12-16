#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,a[10000],i,j,len=1,t;
	memset(a,0,sizeof(a));
	a[0]=1;
	n=1977;
	for(i=2;i<=n;i++)//高精度累乘 
	{
		t=0;//用于储存进位数据 
		for(j=0;j<len;j++)
		{
			a[j]=a[j]*i;//将数组每一位与i相乘 
			a[j]+=t;//并加上上一次的进位数据 
			t=a[j]/10;//得出本次进位数据 
			a[j]%=10;//菜鸡并不会压位 
		}
		while(t!=0)//若最后存在进位则需要增加数组长度 
		{
			a[j]=t%10;//将最后剩余的进位t逐位添加到数组后面即可 
			t/=10;
			j++;
		}
		len=j;
	}
	for(i=len-1;i>=0;i--)
	cout<<a[i];
	return 0;
 } 
