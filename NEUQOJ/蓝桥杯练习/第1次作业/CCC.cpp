#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		break;
		c=a+b;
		cout<<c<<endl;
	}
	return 0;
}
