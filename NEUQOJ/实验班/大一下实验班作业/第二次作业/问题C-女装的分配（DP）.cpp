#include<iostream>
#include<cstring>
using namespace std;
int zh(int x,int y)
{
	unsigned long long res,zi=1,mu=1,i;
	
	for(i=1;i<=y;i++)
	{
		zi*=x;
		x--;
	}
	for(i=1;i<=y;i++) mu*=i; 
	res=zi/mu;
	return res;
}
int main()
{
		unsigned long long a[100000],n;
		while(cin>>n)
		{
			memset(a,0,sizeof(a));
			a[0]=1;a[1]=1;a[2]=2;
			for(int i=3;i<=n;i++)
			{
				int x=i-1;
				for(int j=0;j<=x;j++)
					a[i]+=zh(x,j)*a[j];
			}
			cout<<a[n]<<endl;
		}			
	return 0;
}
