#include<iostream>
using namespace std;
int main()
{
	int n,a[10005],sum,temp;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	for(i=1;i<=n;i++)
	{
		if(a[i]!=i)
		{
			for(j=i;j<=n;j++)
			{
				if(a[j]==i)
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
					sum++;
				}
			}
		}
	}
	cout<<sum<<endl;
	return 0;
 } 
