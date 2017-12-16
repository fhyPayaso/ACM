#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		int sum=0,a;
		for(int j=0;j<m;j++)
		{
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
	}
	return 0;
}
