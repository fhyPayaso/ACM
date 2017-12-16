#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==-1)
			break;
		else if(n==0)
			cout<<'1'<<endl;
		else
		{
			for(int j=0;j<2;j++)
			{
				cout<<'5';
				for(int i=0;i<n-1;i++)
				cout<<'0';
			}
			cout<<endl;
		}
	}
	return 0;
}
