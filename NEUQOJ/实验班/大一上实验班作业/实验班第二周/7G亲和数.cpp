#include<iostream>
using namespace std;
int main()
{
	int i,n,a,b,t1,t2;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a>>b;
	t1=0;
	t2=0;
	for(int j=1;j<a;j++)
	{
		if(a%j==0)
		t1=t1+j;	
	}
	for(int k=1;k<b;k++)
	{
		if(b%k==0)
		t2=t2+k;	
	}
	if(a==t2&&b==t1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	return 0;
} 
