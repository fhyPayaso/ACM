#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[100005],n,k=0;
	int color[100005];
	memset(color,0,sizeof(color));
	cin>>n;
	for(int i=1;i<=n;i++)
	a[i]=i+1;

	for(int i=1;i<=n;i++)
	{
		if(color[i]==0)
		{
			color[i]=1;
			for(int j=i+1;j<=n;j++)
			{
				if(a[j]%a[i]==0)
				{
					color[j]=color[i]+1;
					break;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(color[i]>k)
		k=color[i];
	}
	cout<<k<<endl;
	for(int i=1;i<=n;i++) cout<<color[i]<<" ";
	return 0;
} 
