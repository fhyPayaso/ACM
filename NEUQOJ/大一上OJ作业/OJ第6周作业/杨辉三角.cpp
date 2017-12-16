#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int l;
	while(cin>>l)
	{
		long long a[50][50];
		a[1][1]=1;
		if(l==1)
		{
			cout<<a[1][1]<<endl;
			cout<<endl;
		}
		else
		{

			for(int i=2; i<=l; i++)
			{
				a[i][1]=1;
				a[i][i]=1;
				for(int j=1; j<=i; j++)
					a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			for(int i=1; i<=l; i++)
			{
				for(int j=1; j<i; j++)
					cout<<a[i][j]<<" ";
					cout<<a[i][i]<<endl;
			}
			cout<<endl;
		}
	}
	return 0;
}
