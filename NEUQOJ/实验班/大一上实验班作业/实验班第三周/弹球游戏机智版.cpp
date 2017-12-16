#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{	
		char a[n];
		int i,t=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]=='<')
				t++;
			else
				break;	
		}
		for(i=n-1;i>=0;i--)
		{
			if(a[i]=='>')
				t++;
			else
				break;	
		}
		cout<<t<<endl;
	} 
	return 0;
}
