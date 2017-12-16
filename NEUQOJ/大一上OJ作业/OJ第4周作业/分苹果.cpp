#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	a[1]=1;
	a[2]=2;
	a[3]=2;
	for(int i=4;i<=n;i++)
	{
		a[i]=0;
		for(int j=1;j<=i/2;j++)
		a[i]+=a[j];
		a[i]+=1;
	}
	cout<<a[n]<<endl;
	return 0;
 } 
 
