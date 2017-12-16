#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		char a[50];
		int t=0;
		cin>>a;
		int l=strlen(a);
		if(l>=8&&l<16)
		{
			for(j=0;j<l;j++)
			{
				if(a[j]>=65&&a[j]<=90)
				{
					t++;
					break;
				}
			}
			for(j=0;j<l;j++)
			{
				if(a[j]>=97&&a[j]<=122)
				{
					t++;
					break;
				}
			}
			for(j=0;j<l;j++)
			{
				if(a[j]>=48&&a[j]<=57)
				{
					t++;
					break;
				}
			}
			for(j=0;j<l;j++)
			{
				if(a[j]==126||a[j]==33||a[j]==64||a[j]==35||a[j]==36||a[j]==37||a[j]==94)
				{
					t++;
					break;
				}
			}
			if(t>=3)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
