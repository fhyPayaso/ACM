#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	m=n;
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=i-1;j++)
			{
			cout<<" ";
			}
		for(int j=1;j<=2*m-1;j++)
			{
			cout<<"#";
			}
			m=m-1;
			cout<<endl;
	}
	
	return 0;
}
