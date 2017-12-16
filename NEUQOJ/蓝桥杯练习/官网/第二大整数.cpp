#include<stdio.h>
#include<string.h>
int main()
{
	int a[25],x,max,sec,i;
	for(i=0;i<25;i++)
	{
		scanf("%d",&x);
		if(x==0)
		break;
		a[i]=x;
	}
	int l=i;
	max=a[0];
	sec=-10000;
	for(i=0;i<l;i++)
	{
		if(a[i]>=max)
		max=a[i];
	}
	for(i=0;i<l;i++)
	{
		if(a[i]<max&&a[i]>sec)
		sec=a[i];
	}
	if(sec==-10000)
	printf("%d",max);
	else
	printf("%d",sec);
	return 0;
} 
