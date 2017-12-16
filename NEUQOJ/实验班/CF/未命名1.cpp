#include<iostream>
using namespace std;
int main()
{
	int n,k,day=0,c=0;
	int a[100005];
	cin>>n>>k;
	
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	for(int i=1;i<=n;i++)
	{
		while(a[i]>=2*k)
		{
			a[i]-=2*k;
			day++;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]>k&&a[i]<2*k)
		{
			a[i]=0;
			day++;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		if(a[i])
		c++;
	}
	
	if(c%2==1) day+=(c/2+1);
	else day+=c/2;
	
	cout<<day<<endl;
	return 0;
 } 
