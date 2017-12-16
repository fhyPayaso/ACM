#include<stdio.h>
int hole[1000000];
int main()
{
	int n,m,k,temp;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",temp);
		hole[temp]=1;
	}
	int old,want,f=1,flag=0;
	for(int i=1;i<=k;i++)
	{
		scanf("%d%d",&old,&want);
		if(flag==0)
		{
			if(f==old&&hole[want]==1)
				flag=1;
			if(f==want&&hole[old]==1)
				flag=1;
			if(f==old)
				f=want;
			else if(f==want)
				f=old;		
		}
	}
	printf("%d\n",f);
	return 0;
 } 
