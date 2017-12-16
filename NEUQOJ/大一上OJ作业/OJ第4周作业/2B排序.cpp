#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[10],t;
	for(int i=0;i<10;i++)
	cin>>a[i];
	for(int j=1;j<10;j++)
	{
		for(int i=0;i<10-j;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}	
	}
	for(int i=0;i<9;i++)
	cout<<a[i]<<" ";
	cout<<a[9];	
	return 0;
 } 
