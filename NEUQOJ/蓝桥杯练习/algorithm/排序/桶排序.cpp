#include<stdio.h>
#include<cstring>
int main()
{
	int a[1000],i,j,n,t;
	memset(a,0,sizeof(a)); 
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	
	for(i=0;i<1000;i++)
	{
		for(j=1;j<=a[i];j++)
		printf("%d ",i);
	}
	
	return 0;
} 
