#include<iostream>
using namespace std;
int main()
{
	int n,m,t,x,i,j;
	while(cin>>n>>m)
	{
		int a[m+1];
		for(i=1;i<=m;i++)
		a[i]=0;
		for(j=0;j<n;j++)
		{
			cin>>t;
			for(int k=0;k<t;k++)
			{
				cin>>x;
				a[x]=x;
			}
		}
		int p=0;
		for(i=1;i<=m;i++)
		{
			if(a[i]==0)
			break;
			else
			p++;
		}
		if(p==m)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
