#include<iostream>
#include<cstring>
using namespace std;
int flag[10];
int jud(int x)
{
	int temp,sum=0;
	
	memset(flag,0,sizeof(flag));
	while(x>0)
	{
		temp=x%10;
		flag[temp]=1;
		x/=10;
	}

	for(int i=0;i<10;i++)
		if(flag[i]==1)
			sum++;
	
	if(sum==5)
		return 1;
	else
		return 0; 
}

int main()
{
	int i,j,k,x,y;
	int res;
	
	for(i=10000;i<=99999;i++)
	{
		if(jud(i))
		{
			x=i,y=0;
			while(x>0)
			{
				y*=10;
				y+=x%10;
				x/=10;
			}
			for(j=2;j<10;j++)
			{
				int temp=i*j;
				if(temp==y)
				res=y;
			}	
		}
	}	
	
	while(res>0)
	{
		cout<<res%10<<" ";
		res/=10;
	}
	
	return 0;
}
