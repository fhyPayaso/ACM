#include<iostream>
using namespace std;
int c[20],sum=0;
void print()
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(c[i]==j) 
			cout<<"1";
			else
			cout<<"0";
		}
		cout<<endl;
	}
	cout<<endl;
}

void dps(int x)
{
	if(x==8)
	{
		sum++;
		print();
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
	return 0;
} 
