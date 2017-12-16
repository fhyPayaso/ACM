#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int x,t;
	for(int i=0;i<9;i++) 
	{
		cin>>a[i];
	}
	cin>>x;
	if(x>a[8])
		a[9]=x;
	else
	{
			for(int i=0;i<10;i++)
		{
			if(x<a[i])
			{
				for(t=9;t>=i;t--)
				{
					a[t]=a[t-1];
				}	
					a[i]=x;
					break;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;	
} 
