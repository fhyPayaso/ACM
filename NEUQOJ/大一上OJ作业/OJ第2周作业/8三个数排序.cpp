#include<iostream>
using namespace std;
int main()
{
	int a,b,c,t1,t2,t3;
	cin>>a>>b>>c;
	if(a>b)
	{
		t1=b;
		b=a;
		a=t1;
	}
	if(a>c)
	{
		t3=c;
		c=a;
		a=t3;
	}
	if(b>c)
	{
		t2=b;
		b=c;
		c=t2;
	}
	
	cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	return 0;
}
