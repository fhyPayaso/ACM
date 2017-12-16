#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a[100],i,j,temp;
	while(cin>>n)
	{
		if(n==0) break;
		
		for(i=0;i<n;i++)
		cin>>a[i];
		
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(abs(a[j])<abs(a[j+1]))
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		
		for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
		cout<<a[i]<<endl;
	}
	return 0;
 } 
