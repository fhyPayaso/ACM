#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n!=0)	
		{
			char a[n][n];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				cin>>a[i][j];
			}
			for(int j=0;j<n;j++)
			{
				for(int i=n-1;i>=0;i--)
				{
					if(i>0)
					cout<<a[i][j]<<" ";
					else
					cout<<a[i][j];
				}
				cout<<endl;
			}
			cout<<endl;
		}
	}
	return 0;
 } 


