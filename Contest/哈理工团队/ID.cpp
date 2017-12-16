#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		long long a[n];
		int b[n];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			if(j==0)
			b[j]+=1;
			if(j>0)
			{
				if(a[j]=a[j-1])
				b[j]++;
			}	
		}
		for(int j=0;j<n;j++)
		{
			if(b[j]%2!=0)
			{
				cout<<a[j]<<endl;
				break;
			}
		}
	} 
	return 0;
}

