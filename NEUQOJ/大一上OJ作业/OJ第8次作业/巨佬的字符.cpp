#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char a[50],c;
		cin>>a;
		int l=strlen(a);
		for(int j=0;j<l;j++)
		{
			if(a[j]>'0'&&a[j]<='9')
			{
				for(int k=0;k<int(a[j]-'0');k++)
				cout<<c;
			}
			else
			cout<<a[j];
			if(a[j]>'0'&&a[j]<='9'){}
			else
			c=a[j];
		}
		cout<<endl;
	}
	return 0;
} 
