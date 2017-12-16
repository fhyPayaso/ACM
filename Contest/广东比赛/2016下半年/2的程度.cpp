#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	unsigned long long n;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		unsigned long long x=0;
		unsigned long long k=1;
		while(pow(2,k)<=n)
		{
			x+=n/pow(2,k);
			k++;
		}
		cout<<x<<endl;
	}
	return 0;
} 
