#include<stdio.h>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int n;
	int a[50005];
	int b1[50005],b2[50005];
	while(scanf("%d",&n))
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			b1[i]=1;
			b2[i]=1;
		}
		
		int max=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				if(a[i]>a[j]&&b1[i]<b1[j]+1)
				b1[i]=b1[j]+1;
				if(a[n+1-i]>a[n+1-j]&&b2[n+1-i]<b2[n+1-j]+1)
				b2[n+1-i]=b2[n+1-j]+1;				
			}		
			
		}
		for(int i=1;i<=n;i++)
		{
			if(b1[i]==b2[i])
			{
				int temp=b1[i]+b2[i]-1;
				if(temp>max)
				max=temp;
			}	
		}
//		for(int i=1;i<=n;i++)
//		cout<<b1[i]<<" ";
//		cout<<endl;
//		for(int i=1;i<=n;i++)
//		cout<<b2[i]<<" ";
//		cout<<endl;
		
		printf("%d\n",max);
	}
	return 0;
 } 
