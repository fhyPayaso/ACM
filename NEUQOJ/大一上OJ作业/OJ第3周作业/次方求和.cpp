#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	while(cin>>n)
	{
		a=5,b=0,c=1;
		if(n==-1)
		break;
		else if(n==0)
		{
		cout<<c<<endl;
		}
		else
		{
			cout<<a;
			for(int i=1;i<n;i++)
			cout<<b;
			cout<<a;
			for(int i=1;i<n;i++)
			cout<<b;
			cout<<endl;
		}	
	}
	return 0;
 } 
