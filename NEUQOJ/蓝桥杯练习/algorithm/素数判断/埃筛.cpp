#include<stdio.h>
const int n=1000005;
bool prime[n];
void judge()
{
	int i,j;
	for(i=2;i<n;i++) prime[i]=true; 
	for(i=2;i<n;i++)
	{
		if(prime[i])
		{
			for(j=2*i;j<n;j+=i)
			prime[j]=false;
		}
	}
}
int main()
{
	judge();
	int x;
	scanf("%d",&x);
	for(int i=2;i<x;i++)
	{
		if(prime[i])
		printf("%d\n",i);
	}
	return 0;
}
 
