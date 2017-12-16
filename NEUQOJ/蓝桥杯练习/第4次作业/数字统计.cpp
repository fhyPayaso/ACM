#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,a[10],t,x;
	cin>>n;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		t=i;
		while(t)
		{
			x=t%10;
			a[x]++;
			t/=10;
		}
	}
	for(int i=0;i<10;i++)
	cout<<a[i]<<endl;
	
	return 0;
 } 
