#include<iostream>
using namespace std;
int c[20],sum=0;
void dps(int x)
{
	if(x==8)
	{
		sum++;
		return;
	}
	for(int i=0;i<8;i++)
	{
		c[x]=i;
		int flag=1;
		for(int j=0;j<x;j++)
		{
			if(c[x]==c[j]||x-j==c[x]-c[j]||x-j==c[j]-c[x])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		dps(x+1);	
	}
	
}
int main()
{
	dps(0);	
	cout<<sum;
	return 0;
} 
