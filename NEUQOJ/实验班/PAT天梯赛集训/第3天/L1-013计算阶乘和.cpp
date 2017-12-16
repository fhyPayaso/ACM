#include<iostream>
using namespace std;
int jie(int x)
{
	int j,temp=1;
	for(int j=1;j<=x;j++)
	temp*=j;
	return temp;
}

int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	sum+=jie(i);
	cout<<sum<<endl;
	return 0;
}
