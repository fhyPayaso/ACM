#include<iostream>
using namespace std;
int main()
{
	long long a,n;
	const int m=100000007;
	while(cin>>a>>n)	
	{
		long long t=1;
		while(n!=0)
		{
			if(n%2==1)
			t=(t*a)%m;
			a=(a*a)%m;
			n/=2;
		}
		cout<<t<<endl;
	}
	return 0;
}
