#include<iostream>
using namespace std;
int mian()
{
	int n,m,t,x,i,j;
	while(cin>>n>>m)
	{
		int a[m];
		for(i=0;i<m;i++)
		a[i]=0;
		for(j=0;j<n;j++)
		{
			cin>>t;
			for(int k;k<t;k++)
			cin>>x;
			a[x]=x;
		}
		for(i=0;i<m;i++)
		{
			if(a[i]==0)
			break;
		}
		if(i==m-1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
