//平均时间复杂度---------n^2; 
#include<stdio.h>
int main()
{
	int a[1000],i,j,n,t,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		t=i;
		for(j=i+1;j<n;j++)
		{
			if(a[t]>a[j])
			{
				t=j;
			}
		}
		if(i!=t)
		{
			temp=a[t];
			a[t]=a[i];
			a[i]=temp;
		}
	}
	
	for(i=0;i<n;i++) printf("%d ",a[i]);
	
	return 0;
} 
