#include<iostream>
using namespace std;
int main()
{
	int a[10],temp;
	for(int i=0;i<10;i++)
	cin>>a[i];
	
	for(int i=0;i<9;i++)
	{
		int min=i;
		for(int j=i+1;j<10;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(int i=0;i<10;i++)
	cout<<a[i]<<endl;
	return 0;
}
