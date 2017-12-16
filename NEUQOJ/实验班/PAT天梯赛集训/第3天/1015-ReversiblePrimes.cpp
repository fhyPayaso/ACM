#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
bool prim(long long  n)
{
	int x=sqrt(n);
	if(n==2)return true;
	if(n<2)return false;
	for(int i=2;i<=x;i++)
	if(n%i==0)
	return false;
	return true;
}

int main()
{
	int n,d,i;
	while(cin>>n)
	{
		if(n<0)
		return 0;
		cin>>d;
		if(!prim(n))
		cout<<"No"<<endl;
		else
		{
			long long sum=0;
			int t=0,a[100];
			while(n/d)
			{
				a[t++]=n%d;
				n/=d;
			}
			a[t++]=n%d;
			for(i=t-1;i>=0;i--)
			sum+=a[t-i-1]*pow(d,i);
			if(prim(sum))
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
	}
	return 0;
 } 
 
