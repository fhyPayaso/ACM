#include<iostream>
using namespace std;
int main()
{
	int s=0,a=2,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s+=a;
		a+=3;
	}
	cout<<s<<endl;
	return 0;
}
