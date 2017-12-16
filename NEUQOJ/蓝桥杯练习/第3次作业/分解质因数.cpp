#include<stdio.h>
#include<algorithm>
#include<cmath>
using namespace std;
int judge(int x);
int main()
{
	int a,b,i,n,x=0;
	scanf("%d%d",&a,&b);   
	if(a>b) swap(a,b);
	int arr[3000];
	for(i=2; i<=b; i++)
		if(judge(i))
			arr[x++]=i;

	for(i=a; i<=b; i++)
	{
		n=i;
		printf("%d=",n); 
		if(judge(n)) printf("%d\n",n); 
		else
		{
			x=0;
			while(n!=1)
			{
				if(n%arr[x]==0)
				{
					printf("%d",arr[x]); 
					n/=arr[x];
					x=0;
					if(n!=1) printf("*"); 	
				}
				else x++;
			}
			printf("\n"); 
		}
	}
	return 0;
}
int judge(int x)
{
	for(int k=2; k<=sqrt(x); k++)
		if(x%k==0) return 0;
	return 1;
}



