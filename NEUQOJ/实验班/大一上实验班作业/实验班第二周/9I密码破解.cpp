#include<iostream> 
#include<string.h>
#include<string>
using namespace std;
int main()
{
	int n;
	string b;
	while(cin>>b)
	{
		n=b.size();
	char a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			if(a[i]>=65&&a[i]<90)
			a[i]+=33;
			else
			a[i]=97;
		}
		else if(a[i]>=97&&a[i]<=122)
		{
		if(a[i]>=97&&a[i]<=99)
		a[i]=50;
		else if(a[i]>=100&&a[i]<=102)
		a[i]=51;
		else if(a[i]>=103&&a[i]<=105)
		a[i]=52;
		else if(a[i]>=106&&a[i]<=108)
		a[i]=53;
		else if(a[i]>=109&&a[i]<=111)
		a[i]=54;
		else if(a[i]>=112&&a[i]<=115)
		a[i]=55;
		else if(a[i]>=116&&a[i]<=118)
		a[i]=56;
		else//(a[i]>=119&&a[i]<=122)
		a[i]=57;
		}
		else
		a[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
	return 0;
}
