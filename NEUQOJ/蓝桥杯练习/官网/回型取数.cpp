#include<iostream>
using namespace std;
int main()
{
	int a[205][205],m,n,i,j;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		cin>>a[i][j];
	}
	int x,y,z,w;
	x=1;y=1;z=m;w=n;
	while(x<=z&&y<=w)
	{
		
		for(i=x,j=y;i<=z;i++)
		cout<<a[i][j]<<" ";
		y++;
		if(y>w) break;
		
		for(i=z,j=y;j<=w;j++)
		cout<<a[i][j]<<" ";
		z--;
		if(x>z) break;
		
		for(i=z,j=w;i>=x;i--)
		cout<<a[i][j]<<" ";
		w--;
		
		for(i=x,j=w;j>=y;j--)
		cout<<a[i][j]<<" ";
		x++;
	}

	
	return 0;
 } 
