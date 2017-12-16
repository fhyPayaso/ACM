#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b,c;	
		cin>>a>>b;
		a%=100;
		b%=100;
		c=a+b;
		c%=100;
		cout<<c<<endl;
	}
	return 0;
}
