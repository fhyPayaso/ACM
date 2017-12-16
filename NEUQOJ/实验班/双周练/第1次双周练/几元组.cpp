#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int b[1005][n+5];
		
		for(int i=1;i<=n;i++)
		cin>>b[0][i];
		
		int flag=0;
		int i=0;
		while(flag==0)
		{
			i++;
			for(int j=1;j<n;j++)
			b[i][j]=abs(b[i-1][j]-b[i-1][j+1]);
			b[i][n]=abs(b[i-1][n]-b[i-1][1]);
			
			int x=0;
			for(int k=1;k<=n;k++)
				if(b[i][k]!=0)
					x=1;
			if(x==0)
				flag=1;
			if(i>1000)
			break;	
		}
		if(flag==1)
		cout<<"ZERO"<<endl;
		else
		cout<<"LOOP"<<endl; 
	}
	return 0;
 } 
