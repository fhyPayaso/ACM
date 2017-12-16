#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int b,n,i=0,a[10];
	cin>>b>>n;
	while(n>0)
	{
		a[i++]=n%b;	
		n/=b;
	}
	for(int j=i-1;j>=0;j--)
	cout<<a[j];
	return 0;
}

