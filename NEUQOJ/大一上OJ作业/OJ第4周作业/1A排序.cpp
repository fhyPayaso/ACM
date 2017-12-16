#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[4],t;
	for(int i=0;i<4;i++)
	cin>>a[i];
	for(int j=1;j<4;j++)
	{
		for(int i=0;i<4-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}	
	}
	for(int i=0;i<3;i++)
	cout<<a[i]<<" ";
	cout<<a[3]<<endl;	
	return 0;
 } 
