#include<iostream>
using namespace std;

int main()
{
	long long int sum=0,num,s,a[100];   
	for(int i=1;i<=9;i++)            
	for(int k=0;k<=9;k++)
	for(int j=0;j<=9;j++)
	for(int m=0;m<=9;m++)
	for(int n=0;n<=9;n++)
	for(int p=1;p<=9;p++)    
	{
		if(i!=k&&i!=j&&i!=m&&i!=n&&i!=p&&k!=j&&k!=m&&k!=n&&k!=j&&k!=p&&j!=m&&j!=n&&j!=p&&m!=n&&m!=p&&n!=p)
		{
			sum=(i*1e5+k*1e4+j*1e3+m*1e2+n*1e1+p)*(i*1e5+k*1e4+j*1e3+m*1e2+n*1e1+p);
			s=sum;
			for(int d=1;;d++)
			{
				a[d]=sum%10;   
				sum=sum/10;
				if(a[d]!=i&&a[d]!=j&&a[d]!=k&&a[d]!=m&&a[d]!=n&&a[d]!=p) 
				{
					if(sum==0)
					{
						if(s!=41566646641)
						{
							cout<<i*1e5+k*1e4+j*1e3+m*1e2+n*1e1+p<<endl;
							return 0;
						}
						
					}
				
				}
				else break;
				
			}
		}
	}
	return 0;
}

