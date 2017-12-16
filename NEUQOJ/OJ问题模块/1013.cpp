#include<iostream>
using namespace std;
int main()
{
	int n,a,s=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a%2==0)
		s+=a;
	}
	cout<<s<<endl;
	return 0;
}
