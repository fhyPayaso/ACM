#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;
int n,m;
bool flag[10][10];
bool check()
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		if(flag[i][j]==false)
		return false;
	}
	return true;
}

int main()
{
	
	int n,m,i,j,k;
	int x1,y1,x2,y2;
	cin>>n>>m;
	
	string tab[10][10];
	double res[10][10];

	memset(res,0,sizeof(res));
	memset(flag,false,sizeof(flag));
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>tab[i][j];
			if(tab[i][j].length()<7)
			{
				for(k=0;k<tab[i][j].length();k++)
				{
					res[i][j]*=10.0;
					res[i][j]+=tab[i][j][k]-'0';
				}
				flag[i][j]=true;
			}
		}
	}
	
	while(!check())
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				
				x1=tab[i][j][4]-'0';
				y1=tab[i][j][6]-'0';
				x2=tab[i][j][8]-'0';
				y2=tab[i][j][10]-'0';
				
				int fff=0;
				for(int q1=x1;q1<=x2;q1++)
				{
					for(int q2=y1;q2<=y2;q2++)
					{
						if(flag[i][j]=false)
						fff=1;	
					}
				}	
				
				if(fff==1)
				continue;
				
				if(tab[i][j][0]=='S')
				{
					
					for(int q1=x1;q1<=x2;q1++)
					{
						for(int q2=y1;q2<=y2;q2++)
						{
							res[i][j]+=res[q1][q2];
						}
					}
					flag[i][j]=true;
				}
				else if(tab[i][j][0]=='A')
				{
					int temp=0;
					for(int q1=x1;q1<=x2;q1++)
					{
						for(int q2=y1;q2<=y2;q2++)
						{
							temp+=res[q1][q2];
						}
					}
					res[i][j]=temp/((x2-x1+1.0)*(y2-y1+1.0));
					flag[i][j]=true;
				}
				else if(tab[i][j][0]=='T')
				{
					
					int temp=0,avr;
					for(int q1=x1;q1<=x2;q1++)
					{
						for(int q2=y1;q2<=y2;q2++)
						{
							temp+=res[q1][q2];
						}
					}
					avr=temp/((x2-x1+1.0)*(y2-y1+1.0));
					
					for(int q1=x1;q1<=x2;q1++)
					{
						for(int q2=y1;q2<=y2;q2++)
						{
							temp+=(res[q1][q2]-avr)*(res[q1][q2]-avr);
						}
					}
					temp/=((x2-x1+1.0)*(y2-y1+1.0));
					res[i][j]=sqrt(temp);
					flag[i][j]=true;
				}
			}
		}
	}
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		cout<<fixed<<setprecision(2)<<res[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}
