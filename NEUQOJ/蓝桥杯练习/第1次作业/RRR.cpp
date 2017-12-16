#include<iostream>
using namespace std;
int main()
{
	long long a=2,sum=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=a;
		a=a*10+2;
	}
	cout<<sum<<endl;
	return 0;
}
