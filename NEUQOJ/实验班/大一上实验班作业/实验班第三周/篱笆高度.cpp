#include<iostream>
using namespace std;
int main()
{
	int n,h;
	while(cin>>n>>h)
	{
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int c=n;
		for(int j=0;j<n;j++)
		{
			if(a[j]>h)
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
 } 
