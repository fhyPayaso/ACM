#include<iostream>
using namespace std;
int main()
{
	int n;
	char a[1000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			if(i+2<n&&a[i]=='o'&&a[i+1]=='g'&&a[i+2]=='o')
			{
				while(a[i+1]=='g'&&a[i+2]=='o')
				i+=2;
				cout<<"***";
			}
			else
			cout<<a[i];	
		}
		cout<<endl;
	}
	return 0;
}
