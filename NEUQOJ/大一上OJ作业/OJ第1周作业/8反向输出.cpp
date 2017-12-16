#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	char r;
	int n;
	cin>>a;
	n=a.size();
	for(int i=0;i<n/2;++i)
	{
		r=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=r;
	}
	cout<<a<<endl;
	return 0;
}
