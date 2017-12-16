#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	int a[1002],b[1002];
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	cin>>b[i];
	 long long mm=999999999;
	for(int i=1;i+n-1<=m;i++)
	{
		int j=i;
	 	long long  sum=0,bj=0;
		while(j<i+n&&sum<mm)
		{
			int k=b[j++]-a[++bj];
			if((sum+k*k)>mm)
			break;
			sum+=k*k;
		}
		if(i==1)
		mm=sum; 
		if(sum<mm&&j==i+n)
		mm=sum;
	}
	cout<<mm<<endl;
	return 0;
}

