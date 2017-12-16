#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct you
{
	long long zi;
	long long mu;
};
int gcd(long long x1,long long x2)
{
	int min;
	long long max,temp;
	long long a=x1,b=x2;
	if(x1<x2) swap(x1,x2);
	while(x2!=0)
	{
		temp=x1%x2;
		x1=x2;
		x2=temp;
	}
	max=x1;
	min=a*b/max;
	return min;
}
int main()
{
	int n,zheng=0;
	char q;
	you a[105];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].zi>>q>>a[i].mu;
		while(abs(a[i].zi)>a[i].mu)
		{
			if(a[i].zi>0)
			{
				a[i].zi=a[i].zi-a[i].mu;
				zheng=zheng+1;
			}
			else if(a[i].zi<0)
			{
				a[i].zi+=a[i].mu;
				zheng--;
			}
		}
		for(int j=2;j<=1000;j++)
		{
			if(a[i].zi%j==0&&a[i].mu%j==0)
			{
				a[i].zi/=j;
				a[i].mu/=j;
			}
		}
	}
	
	long long x1,x2,t;
	x1=a[1].mu;
	x2=a[2].mu;
	t=gcd(x1,x2);
	
	for(int i=3;i<=n;i++)
	{
		x1=t;
		x2=a[i].mu;
		t=gcd(x1,x2);
	}
	
	int zi=0,xi;
	for(int i=1;i<=n;i++)
	{
		xi=t/a[i].mu;
		a[i].mu=t;
		a[i].zi*=xi;
		zi+=a[i].zi;
	}
	
	while(abs(zi)>=t)
	{
		if(zi>0)
		{
			zi-=t;
			zheng++;
		}
		else if(zi<0)
		{
			zi+=t;
			zheng--;
		}
	}
	
	for(int i=2;i<1000;i++)
	{
		if(zi!=0)
		{
			if(zi%i==0&&t%i==0)
			{
				zi/=i;
				t/=i;
			}
		}
	}
	
	if(zheng!=0&&zi!=0)
	{
		cout<<zheng<<" ";
		
	}
	else if(zheng!=0&&zi==0)
	cout<<zheng<<endl;

	if(zi!=0)
	cout<<zi<<"/"<<t<<endl;
	else if(zi==0&&zheng==0)
	cout<<"0";
	
	return 0;
}
