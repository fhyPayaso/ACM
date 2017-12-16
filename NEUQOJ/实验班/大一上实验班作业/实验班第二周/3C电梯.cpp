#include<iostream>
using namespace std;
int main()
{
	int n;
	int u=6,d=4,s=5;
	while(cin>>n)
	{
		if(n==0)
		break;
		int a[n+1],t=0;
		a[0]=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]>a[i-1])
			{
				t=t+(a[i]-a[i-1])*u+s;
			}
			if(a[i]<a[i-1])
			{
				t=t+(a[i-1]-a[i])*d+s;
			}
		}
		cout<<t<<endl;
	}
	return 0;
} 
