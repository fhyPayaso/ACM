#include<iostream>
using namespace std;
int main()
{
	int n,m;
	char a ;
	while(cin>>n)
	{
	for(int i=1;i<=n;i++)
	{
		a=65;
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
		cout<<a;
		a=a+1;
		}
		int t=1;	
		for(int j=1;j<=i-1;j++)
		{
			
			a=65+i-1-t;
			cout<<a;
			t++;
		}
		cout<<endl;
	}
	}
	return 0;
} 
