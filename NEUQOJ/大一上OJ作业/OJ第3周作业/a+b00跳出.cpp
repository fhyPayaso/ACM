#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		break;
		else
		sum=a+b;
		cout<<sum<<endl;
	}
	return 0;
}
