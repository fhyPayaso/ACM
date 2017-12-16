#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[35][35],m,n;
void f()
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==-1) continue;
			if(a[i-1][j]+a[i][j-1]<=-1) a[i][j]=-1;
			else a[i][j]+=max(a[i-1][j],a[i][j-1]);	
		}
	}
	return ;
}
int main()
{
	while(cin>>m>>n)
	{
		memset(a,0,sizeof(a));
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		f();
		if(a[m][n]==-1) cout<<"Xiao Ming is a stupid boy"<<endl;
		else cout<<a[m][n]<<endl;
	}	
	return 0;
 } 
