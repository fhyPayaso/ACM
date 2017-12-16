#include<iostream>
using namespace std;
int main()
{
	int t,m,n,d,a[110],b[110],who,rep,x1,y1,x2,y2,i,j,k;
	char act,f1,f2;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int judge=0;
		cin>>m>>n;
		for(j=0;j<=m;j++)a[j]=j;
		for(j=0;j<=n;j++)b[j]=j;
		cin>>d;
		cin>>x1>>y1>>f1;
		cin>>x2>>y2>>f2;
		for(j=0;j<d;j++)
		{
			cin>>who>>act>>rep;
			if(judge==0)                            
			{
				if(who==1)
				{
					for(k=0;k<rep;k++)
					{
						if(act=='F')
						{
							if     (f1=='N') y1++;
							else if(f1=='S') y1--;
							else if(f1=='E') x1++;
							else if(f1=='W') x1--;
							if(x1==x2&&y1==y2) judge=1;
						}
						else if(act=='L')
						{
							if     (f1=='N') f1='W';
							else if(f1=='S') f1='E';
							else if(f1=='E') f1='N';
							else if(f1=='W') f1='S';
						}
						else if(act=='R')
						{
							if     (f1=='N') f1='E';
							else if(f1=='S') f1='W';
							else if(f1=='E') f1='S';
							else if(f1=='W') f1='N';
						}
					}
				}
				
				else if(who==2)
				{
					for(k=0;k<rep;k++)
					{
						if(act=='F')
						{
							if     (f2=='N') y2++;
							else if(f2=='S') y2--;
							else if(f2=='E') x2++;
							else if(f2=='W') x2--;
							if(x1==x2&&y1==y2) judge=2;
						}
						else if(act=='L')
						{
							if     (f2=='N') f2='W';
							else if(f2=='S') f2='E';
							else if(f2=='E') f2='N';
							else if(f2=='W') f2='S';
						}
						else if(act=='R')
						{
							if     (f2=='N') f2='E';
							else if(f2=='S') f2='W';
							else if(f2=='E') f2='S';
							else if(f2=='W') f2='N';
						}
					}
				}
			}
			if(judge!=1&&judge!=2)   
			{
				if     (x1<=0||x1>m||y1<=0||y1>n) judge=3;
				else if(x2<=0||x2>m||y2<=0||y2>n) judge=4;
				else                              judge=0;
			}
		}
		switch(judge)
		{
			case 1:cout<<"Boss Cai crashes into Junlao."<<endl;  break;
			case 2:cout<<"Junlao crashes into boss Cai."<<endl;  break;
			case 3:cout<<"Boss Cai crashes into the wall."<<endl;break;
			case 4:cout<<"Junlao crashes into the wall."<<endl;  break;
			default:cout<<"This is safe."<<endl;                
		}
	}
	return 0;
}
