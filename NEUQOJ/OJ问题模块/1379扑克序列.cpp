#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[1000]= {0},b[1000]= {0};
	int flag=0;
	int sum=0,num=0;
	for(int i=20; i<50; i++)
	{
		int m=i;
		while(m)
		{
			a[m%10]=1;
			m/=10;
		}
		for(int j=50; j<99; j++)
		{
			int m=j;
			while(m)
			{
				a[m%10]=1;
				m/=10;
			}
			sum=i*j;
			while(sum)
			{
				if(a[sum%10]==1)
				{
					//a[sum%10]=0;
					sum/=10;
				}
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				num++;
			}
		}
		memset(a,0,sizeof(a));
	}
	sum=0;flag=0;
	for(int i=2; i<=9; i++)
	{
		a[i]=1;
		for(int j=987; j*i>1000; j--)
		{
			int m=j;
			while(m)
			{
				a[m%10]=1;
				m/=10;
			}
			sum=i*j;
			while(sum)
			{
				if(a[sum%10]==1)
				{
					//a[sum%10]=0;
					sum/=10;
				}
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				num++;
			}
		memset(a,0,sizeof(a));
		}
	}
	cout<<num<<endl;
	return 0;
}

