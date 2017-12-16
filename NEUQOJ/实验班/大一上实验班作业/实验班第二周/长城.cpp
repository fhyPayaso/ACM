#include<iostream>
#include<string.h>
using namespace std;
int a[10000];
int main()
{
	int sum(int c,int d);
	int n,t,x,d;
	while(cin>>n>>t)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>d;
			a[i]=d;
		}
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<n-k;i++)
			{	x=sum(i,i+k);
				if(x>t)
				{
					cout<<k+1<<endl;
					break;
				}
			}
		}
	}
	
	return 0;
}
int sum(int c,int d)
{
	int s=0;
	for(int j=c;j<=d;j++)
	s+=a[j];
	return(s);
}
