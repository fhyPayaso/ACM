#include<iostream>
using namespace std;
int main()
{
	long long n,m,x,s,t;
	while(cin>>n>>m)
	{
		int a[m+1];
		for(int i=0;i<=m;i++)
		a[i]=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[x]++;
		}
		s=n*(n-1)/2;
		long long c=0;
		for(int j=1;j<=m;j++)
		{
			t=a[j];
			c+=t*(t-1)/2;
		}
		s-=c;
		cout<<s<<endl;
	}
	return 0;
}
