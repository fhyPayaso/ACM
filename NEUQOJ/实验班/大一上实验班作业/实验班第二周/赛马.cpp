#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,x,t;
	while(cin>>n)
	{
		if(n==0)
		break;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
			for(int j=1;j<n;j++)
			for(int i=0;i<n-j;i++)
			if(a[i]>=a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
					
		for(int j=0;j<n;j++)
		cin>>b[j];
			for(int j=1;j<n;j++)
			for(int i=0;i<n-j;i++)
			if(b[i]>=b[i+1])
			{
				x=b[i];
				b[i]=b[i+1];
				b[i+1]=x;
			}
		int p=n/2,m=0;
		int q=p;
		for(int i=0;i<=q;i++)
		{
			if(a[n-1-p]>b[i])
			m++;
			n++;
		}
		
		if(m>q)			
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
