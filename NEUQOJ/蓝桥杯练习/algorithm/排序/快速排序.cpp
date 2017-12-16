//平均时间复杂度---------n*log(2)n; 
#include<stdio.h> 
int sum=0;
void quicksort(int left,int right,int*a)
{
	int i,j,t,temp;
	if(left>=right) return;
	
	temp=a[left];
	i=left;
	j=right;
	
	while(i!=j)
	{
		while(a[j]>=temp&&j>i) j--;
		while(a[i]<=temp&&j>i) i++;
		if(i<=j)
		{
			sum++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
	a[left]=a[i];
	a[i]=temp;
	
	quicksort(left,i-1,a);
	quicksort(i+1,right,a);
	
	return;
}

int main()
{
	
	int arry[1000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arry[i]);
	
	quicksort(0,n-1,arry);
	
	for(i=0;i<n;i++) printf("%d ",arry[i]);
	printf("\n%d",sum);
	return 0;
}

