#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	double a[1005];
	memset(a,0,sizeof(a));
	
	int n1,n2,k;
	double temp;
	cin>>n1;
	for(int i=1;i<=n1;i++)
	{
		cin>>k;
		cin>>temp;
		a[k]+=temp;
	}
	cin>>n2;
	for(int i=1;i<=n2;i++)
	{
		cin>>k;
		cin>>temp;
		a[k]+=temp;
	}
	int sum=0;
	for(int i=0;i<1005;i++)
	{
		if(a[i]!=0)
		sum++;
	}
	cout<<sum;
	for(int i=1003;i>=0;i--)
	{
		if(a[i]!=0)
		cout<<" "<<i<<" "<<fixed<<setprecision(1)<<a[i];
	}
	return 0;
}
