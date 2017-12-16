#include<iostream>
using namespace std;
int main()
{
	int n,flag=0,sum=0,x,y;
	int a[10005];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>=0)
		flag=1;
	}
	if(flag==0)
		cout<<'0'<<" "<<a[1]<<" "<<a[n];
	else
	{
		for(int i=1;i<=n;i++)
		{
			int temp=0;
			for(int j=i;j<=n;j++)
			{
				temp+=a[j];
				if(sum<temp)
				{
					sum=temp;
					x=i;
					y=j;
				}	
			}
		}
		cout<<sum<<" "<<a[x]<<" "<<a[y];
	}
	return 0;
}
