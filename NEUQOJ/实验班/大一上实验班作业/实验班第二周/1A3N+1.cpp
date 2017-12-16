#include<iostream>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	cin>>n;
	for(x=0;;x++)
	{
	if(n==1)	
		break;
	else
		{
		if(n%2==1)
		n=3*n+1;
		else
		n=n/2;	
		} 
	}
	cout<<x<<endl;	
	}
	return 0;
} 
