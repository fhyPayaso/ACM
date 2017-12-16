#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int judge(int x) 
{
	for(int i=2;i<=sqrt(x);i++)
	if(x%i==0) return 0;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(judge(i))
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n/=i;
			}
		}
	}
	cout<<n;
	return 0;
}
