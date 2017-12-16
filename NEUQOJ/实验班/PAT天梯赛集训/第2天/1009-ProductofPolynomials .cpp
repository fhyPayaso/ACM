#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	double a[10005],b[10005],c[10005];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	
	int n1,n2,k;
	double temp;
	cin>>n1;
	for(int i=1;i<=n1;i++)
	{
		cin>>k;
		cin>>temp;
		a[k]=temp;
	}
	cin>>n2;
	for(int i=1;i<=n2;i++)
	{
		cin>>k;
		cin>>temp;
		b[k]=temp;
	}
	for(int i=0;i<10003;i++)
	{
		if(a[i]!=0)
		{
			for(int j=0;j<10003;j++)
			{
				if(b[j]!=0)
				{
					c[i+j]+=a[i]*b[j]; 
				}
			}
		}
	}	
	
	int sum=0;
	for(int i=0;i<10005;i++)
	{
		if(c[i]!=0)
		sum++;
	}
	cout<<sum;
	for(int i=10003;i>=0;i--)
	{
		if(c[i]!=0)
		cout<<" "<<i<<" "<<fixed<<setprecision(1)<<c[i];
	}
	return 0;
}
