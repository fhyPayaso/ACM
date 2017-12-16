#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int w,m,n,i,j,x=1;
	int xm,ym,xn,yn,res=0;
	cin>>w>>m>>n;
	int h=max(m,n)/w+1;
	
	int a[h+5][w+5];
	
	for(i=1;i<=h;)
	{
		for(j=1;j<=w;j++)
		{
			a[i][j]=x;
			x++;
		}
		i++;
		for(j=w;j>=1;j--)
		{
			a[i][j]=x;
			x++;
		}
		i++;
	}
	
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			if(a[i][j]==m)
			{
				xm=i;ym=j;
			}
			else if(a[i][j]==n)
			{
				xn=i;yn=j;
			}
		}
	}
	res=abs(xm-xn)+abs(ym-yn);
	cout<<res<<endl;
	return 0;
} 
