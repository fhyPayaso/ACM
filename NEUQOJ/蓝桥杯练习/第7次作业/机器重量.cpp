#include<iostream>
using namespace std;
int n,m,d;
int c[1000][1000],w[1000][1000];
int best[1000],x[1000];
int cp=0,cw=0,sum=0;
void f(int i)
{
	int j;
	if(i>n)
	{
		if(cw<sum)
		{
			sum=cw;
			for(j=1;j<=n;j++)
			best[j]=x[j];
		}
		return ;
	}
	
	for(j=1;j<=m;j++)
	{
		x[i]=j;
		cw+=w[i][j];
		cp+=c[i][j];
		if(cp<=d&&cw<sum)
		f(i+1);
		cw-=w[i][j];
		cp-=c[i][j];
	}
	
}

int main()
{
	int i,j;
	cin>>n>>m>>d;
	
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		cin>>c[i][j];
	
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		cin>>w[i][j];
	
	for(i=1;i<=n;i++)
	sum+=c[i][1];
	f(1);
	cout<<sum<<endl;
	for(i=1;i<=n;i++)
	cout<<best[i]<<" ";
	return 0;
 } 
