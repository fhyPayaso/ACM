#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		unsigned long long x=0;
		for(int i=1;i<=n;i++)
		x+=i;
		cout<<x<<endl;
		cout<<endl;
	}
	return 0;
}
