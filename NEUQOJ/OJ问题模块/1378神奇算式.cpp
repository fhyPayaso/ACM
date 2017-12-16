#include<iostream>
#include<string.h>
int main()
{
	int i,j,sum=0;
	bool flag[10];
	for(i=1;i<1000;i++)
	{
		for(j=i;j<1000;j++)
		{
			memset(flag,false,sizeof(flag));
			if(999<i*j&&i*j<10000)
			{
				int temp1=i,temp2=j,temp3=i*j,t=0;
				while(temp1)
				{
					flag[temp1%10]=true;
					temp1/=10;
				}
				while(temp2)
				{
					flag[temp2%10]=true;
					temp2/=10;
				}
				while(temp3)
				{
					if(flag[temp3%10]==true)
					{
						temp3/=10;
						t++;
					}
					else
					break;
				}
				if(t==4) sum++;
			}
		}
	}
	printf("%d\n",sum/2);
	return 0;
 } 
