#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[11][11],i,j;
		a[1][1]=1; a[2][1]=1; a[2][2]=1;
		for(i=3;i<=n;i++)
		{
			a[i][1]=1; a[i][i]=1;
			for(j=2;j<i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
		for(i=n;i>0;i--)
		{
			for(int k=1;k<=n-i;k++)
			cout<<"   ";
			for(j=1;j<i;j++)
			cout<<setw(3)<<a[i][j]<<"   ";
			cout<<setw(3)<<a[i][j]<<endl;
			
		}
		cout<<endl;
	}
	return 0;
}
