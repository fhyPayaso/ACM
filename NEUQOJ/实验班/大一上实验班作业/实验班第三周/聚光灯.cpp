#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[n][m];
		int t=0,t1=0,t2=0,t3=0,t4=0;
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>a[i][j];
		
		for(int i=0;i<n;i++)
		{
			int s=0;
			for(int j=0;j<m;j++)
			{
				s+=a[i][j];
				if(a[i][j]==0&&s>0)
				t++;
				else
				continue;
			}
		} 
		for(int i=0;i<n;i++)
		{
			int s=0;
			for(int j=m-1;j>=0;j--)
			{
				s+=a[i][j];
				if(a[i][j]==0&&s>0)
				t++;
				else
				continue;
			}
		} 
		for(int j=0;j<m;j++)
		{
			int s=0;
			for(int i=0;i<n;i++)
			{
				s+=a[i][j];
				if(a[i][j]==0&&s>0)
				t++;
				else
				continue;
			}
		} 
		for(int j=0;j<m;j++)
		{
			int s=0;
			for(int i=n-1;i>=0;i--)
			{
				s+=a[i][j];
				if(a[i][j]==0&&s>0)
				t++;
				else
				continue;
			}
		}
		cout<<t<<endl;
	}		
	return 0;
}
 
