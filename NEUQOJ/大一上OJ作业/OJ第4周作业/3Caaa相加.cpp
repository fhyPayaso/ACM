#include<iostream>
using namespace std;
int main()
{
	int a,n,b;
	unsigned long long s=0; 
	cin>>a>>n;
	b=a;
	for(int i=0;i<n;i++)
	{
		s+=a;
		a=a*10+b;
	}
	cout<<s<<endl;
	return 0;
 } 
