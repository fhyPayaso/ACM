#include<iostream>
using namespace std;
int main()
{
	unsigned long long n,i,t;
	while(cin>>n)
	{
		t=0;
		for(i=1;;i++)
		{
		if(n==0)
		break;
		t+=n%10;
		n=n/10;
		}
		cout<<t<<endl;
	}
	return 0;
}
