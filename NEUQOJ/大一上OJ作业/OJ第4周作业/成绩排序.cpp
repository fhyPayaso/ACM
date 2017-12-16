#include<iostream>
using namespace std;
int main()
{
	int n,t;
	while(cin>>n)
	{
		if(n==0)
		break;						
		int a[10000][8];
		for(int i=0;i<n;i++)
		for(int j=1;j<=6;j++)
			cin>>a[i][j];
		for(int i=0;i<n;i++) 
		{
			a[i][0]=0;
			for(int j=1;j<=6;j++)
			a[i][0]+=a[i][j];
		}
		for(int i=0;i<n;i++)
		a[i][7]=i+1; 
		for(int m=0;m<7;m++)
		for(int i=0;i<7-m;i++) 
		for(int j=0;j<7;j++)
		{
			if(a[i][j]<a[i+1][j])
			for(int k=0;k<8;k++) 
			{
				t=a[i][k];
				a[i][k]=a[i+1][k];
				a[i+1][k]=t;
			}
			else if(a[i][j]==a[i+1][j])
			continue;
			else
			break;
		}
		for(int j=0;j<n-1;j++)
		cout<<a[j][7]<<" ";
		cout<<a[n-1][7]<<endl;
	}
	return 0;
} 
 

 
 
 
