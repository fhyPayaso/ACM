#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t,i,t1,t2;
	while(cin>>n)
	{
		int a[n];
		if(n==0)
		break;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=0;j<n-1;j++)
		{	
			for(int k=0;k<n-j-1;k++)
			{
				t1=abs(a[k]);
				t2=abs(a[k+1]);
				if(t1<t2)
				{
					t=a[k];
					a[k]=a[k+1];
					a[k+1]=t;
				}
			}
		}	
		for(int i=0;i<n;i++)
		{
			if(i<n-1)
			cout<<a[i]<<" ";
			else
			cout<<a[i]<<endl;
		}
	}
	return 0;
} 
