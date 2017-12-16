#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,b[1000],i=1;
	cin>>a;
	do
	{
		b[i]=a%8;
		a/=8;
		i++;
	}while(a!=0);
	for(i-=1;i>0;i--)
	cout<<b[i];
	return 0;
}
