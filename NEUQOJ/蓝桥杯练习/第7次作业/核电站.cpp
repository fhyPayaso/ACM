#include<iostream>
using namespace std;
int main()
{
	int n,a[50];
	a[1]=2;
	a[2]=4;
	a[3]=7;
	for(int i=4;i<=40;i++)
	a[i]=a[i-1]+a[i-2]+a[i-3];
	
	while(cin>>n)
	cout<<a[n]<<endl;
	
	return 0;
 } 
