#include<iostream>
using namespace std;

int quick(int n)
{
	int res=1;
	for(int i=1;i<=n;i++)
	res*=2;
	return res;
}
int main()
{
	int n,a;
	double sum;
	cin>>n>>sum;
	a=(sum-n-1)/(quick(n+1)-1)+1;
	cout<<a<<endl;
	return 0;
}
