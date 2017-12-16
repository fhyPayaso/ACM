#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int m,k,a[1005],res[1005];
	while(cin>>m>>k) 
	{
		memset(res,0,sizeof(res));
		for(int i=1;i<=m;i++)
		cin>>a[i];
		
		for(int i=1;i<=k;i++)
		res[i]=a[i];
		for(int i=2;i<=m;i++)
		{
			int min=999999;
			for(int j=1;j<=k&&i-j>0;j++)
			{
				if(min>res[i-j])
				min=res[i-j];
			}
			if(res[i]>min+a[i]||!res[i])	
			res[i]=min+a[i];
		}
		cout<<res[m]<<endl;
	}
	return 0;
 } 
 
