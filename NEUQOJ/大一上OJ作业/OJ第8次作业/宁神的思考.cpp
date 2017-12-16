#include<iostream>
using namespace std;
int main()
{
	int m,n,a[110][110],i,j,x,y,k;
	char s;
	while(cin>>m>>n)
	{
		int t=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			cin>>a[i][j];
		}
		cin>>x>>y>>s>>k;
		for(i=0;i<k;i++)
		{
			if(a[x][y]==1)
			{
				a[x][y]=0;
				if     (s=='N'){s='E';y++;}
				else if(s=='S'){s='W';y--;}
				else if(s=='E'){s='S';x++;}
				else if(s=='W'){s='N';x--;}
			}
			else
			{
				a[x][y]=1;
				if     (s=='N'){s='W';y--;}
				else if(s=='S'){s='E';y++;}
				else if(s=='E'){s='N';x--;}
				else if(s=='W'){s='S';x++;}
			}
			if(x<0||y<0||x==m||y==n)
			{
				cout<<"Let us prepare a suit-dress for god Ning."<<endl;
				break;
			}
			t++;
		}
		if(t==k)
		cout<<x<<" "<<y<<endl;
	}
	return 0;
} 
