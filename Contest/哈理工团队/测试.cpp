#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		long long a[n];
		int b[n];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(j==0)
			b[j]+=1;
			if(j>0)
			{
				for(int k=1;k<j;k++)
				{
					if(a[k]==a[k-1])
					{
						b[k]++;
						break;
					}
					if(k==j-1)
					b[j]++;
				}
			}	
		}
		for(int j=0;j<n;j++)
		{
			if(b[j]%2!=0)
			{
				printf("%d",a[j]);
				printf("\n");
				break;
			}
		}
	} 
	return 0;
}

