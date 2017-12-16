#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	int a[10],i=0,j,n,l;
	while(i!=32)
	{
		
		n=i;l=0;i++;
		memset(a,0,sizeof(a));
		while(n!=0)
		{
			a[l]=n%2;
			n/=2;
			l++;
		}
		for(j=4;j>=0;j--)
		cout<<a[j];
		cout<<endl;
	}
	return 0;
}
