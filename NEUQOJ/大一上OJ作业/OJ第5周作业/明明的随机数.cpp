#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)	
		if(a[i]==a[j])
		{
			a[i]=0;
			m--;
			break;
		}
	}
	sort(a,a+n);
	cout<<m<<endl;
	for(int k=0;k<n;k++)
	if(a[k]!=0)
	cout<<a[k]<<" ";
	return 0;
} 
