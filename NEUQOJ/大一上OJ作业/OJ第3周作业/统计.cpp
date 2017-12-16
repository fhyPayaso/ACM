#include<iostream>
using namespace std;
int main()
{
	int n,t,m,x=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>t;
		a[i]=t;	
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(a[i]<m)
		x++;
	}
	cout<<x<<endl;
	return 0;
} 
