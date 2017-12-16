#include<iostream>
#include<cstring>
#include<iomanip> 
using namespace std;
int main()
{
	int a[100005],num,flag=0;
	int n,m,k,i,j;
	memset(a,0,sizeof(a));
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cin>>k;
		for(j=1;j<=k;j++)
		{
			cin>>num;
			if(k!=1) 
			a[num]=1;
		}
	}
	
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>num;
		if(a[num]==0&&flag==0)
		{
			cout<<setw(5)<<setfill('0')<<num;
			flag=1;
			a[num]=1;
		}
		else if(a[num]==0&&flag==1)
		{
			cout<<" "<<setw(5)<<setfill('0')<<num;
			a[num]=1;
		}
	}
	if(flag==0)
	cout<<"No one is handsome";
	return 0;
}
