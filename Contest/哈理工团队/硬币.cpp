#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;	
		int a[n];
		for(int j=0;j<n;j++)
		cin>>a[j];
		float x=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]==1)
			x++;	
		}
		float s=x/n;
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl;
	}
}
