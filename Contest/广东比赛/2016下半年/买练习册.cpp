#include<iostream>
using namespace std;
int main() 
{
	int t;
	unsigned long long n,a,b,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>a>>b>>c;
		unsigned long long s=n%4;
		if(s==0)
		cout<<0<<endl;
		else if(s==3)
		{
			if(a<=b+c)
			cout<<a<<endl;
			else if(b<=2*c)
			cout<<b+c<<endl;
			else
			cout<<3*c<<endl;
		}
		else if(s==2)
		{
			if(2*a<=b&&a<=c)
			cout<<2*a<<endl;
			else if(b<=2*c)
			cout<<b<<endl;
			else
			cout<<2*c<<endl;
		}
		else
		{
			if(3*a<=c&&2*a<=b)
			cout<<3*a<<endl;
			else if(a+b<=c)
			cout<<a+b<<endl;
			else
			cout<<c<<endl;
		}
	}
	return 0;
}
