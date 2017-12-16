#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,len;
	cin>>n;
	int x=sqrt(n);
	for(len=12;len>=1;len--)
	{
		for(int i=2;i<=x;i++)
		{
			int temp=1;
			for(int j=i;j<i+len;j++)
				temp*=j;
			if(n%temp==0)
			{
				cout<<len<<endl;
				cout<<i;
				for(int j=i+1;j<i+len;j++)
				cout<<"*"<<j;
				return 0;
			}
		}
	}
	cout<<1<<endl<<n;
	return 0;
}
