#include<iostream>
#include<cstring>
using namespace std;
int a[150],b[150],t;       
int f(int x,int y)           
{
	for(int i=1;i<=t;i++)
	if(a[i]==x&&b[i]==y)     
	return 1;
	return 0;
}        
int main()
{
	int n,m,x,y;
	while(cin>>n>>m>>x>>y)
	{
		int p,s=0;  
		memset(a,0,sizeof(a));   
		memset(b,0,sizeof(b));
		cin>>t;
		for(int i=1;i<=t;i++)  
		cin>>a[i]>>b[i];
		char act[150];       
		cin>>p;
		for(int i=1;i<=p;i++) 
		{
			cin>>act[i];            
			if(s==0)     
			{
				if     (act[i]=='W'){x--;s=f(x,y);}
				else if(act[i]=='E'){x++;s=f(x,y);}
				else if(act[i]=='N'){y++;s=f(x,y);}
				else if(act[i]=='S'){y--;s=f(x,y);}	
			}
		}
		if(s==1)
			cout<<"the boss of river is also desperated what can he do?"<<endl;
		else
			cout<<"the boss of river finished his show!!"<<endl;	
	}
	return 0;
}

