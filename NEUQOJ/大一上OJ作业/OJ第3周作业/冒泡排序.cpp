#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		long long a[n],x;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<n;j++)
			for(int i=0;i<n-j;i++)
			if(a[i]>a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
		for(int i=0;i<n-1;i++)
		cout<<a[i]<<" ";
		cout<<a[n-1];
		cout<<endl;
	}
	return 0;
 } 

