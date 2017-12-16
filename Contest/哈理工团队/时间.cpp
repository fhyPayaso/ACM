#include<iostream>
using namespace std;
int main()
{
	int a,c,e,f,n;
	float p,q;
	char b,d;
	int g[12]={31,29,31,30,31,30,31,31,30,31,30,31},h[12]={31,28,31,30,31,30,31,31,30,31,30,31},k[12];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c>>d>>e>>f;
	
	if((a%4==0&&a%100!=0)||a%400==0)
	{
		for(int i=0;i<12;i++)
		{
			k[i]=g[i];
		}
	}
	else
	for(int i=0;i<12;i++)
		{
			k[i]=h[i];
		}
	
	q=f/86400;
	p=e+q;
	if(q>=1)
	{
		if(p>k[c-1])
		{
			while(p/k[c-1]>1)
			{
				p-=k[c-1];
				c+=1;
				if(c>12)
				{
					a+=1;
					if((a%4==0&&a%100!=0)||a%400==0)
					{
						for(int i=0;i<12;i++)
						{
							k[i]=g[i];
						}
					}
					else
					for(int i=0;i<12;i++)
					{
						k[i]=h[i];
					}
					c-=12;
				}
				else continue;
			}
			if(c>9)
			{
				if(p>9)
				cout<<a<<b<<c<<d<<p<<endl;
				else
				cout<<a<<b<<c<<d<<0<<p<<endl;
			}	
			else
			{
				if(p>9)
				cout<<a<<b<<0<<c<<d<<p<<endl;
				else
				cout<<a<<b<<0<<c<<d<<0<<p<<endl;
			}	
		}
		else
		{
			if(c>9)
			{
				if(p>9)
				cout<<a<<b<<c<<d<<p<<endl;
				else
				cout<<a<<b<<c<<d<<0<<p<<endl;
			}	
			else
			{
				if(p>9)
				cout<<a<<b<<0<<c<<d<<p<<endl;
				else
				cout<<a<<b<<0<<c<<d<<0<<p<<endl;
			}	
		}
		
	}
	else
		{	
		if(c>9)
			{
				if(p>9)
				cout<<a<<b<<c<<d<<p<<endl;
				else
				cout<<a<<b<<c<<d<<0<<p<<endl;
			}	
			else
			{
				if(p>9)
				cout<<a<<b<<0<<c<<d<<p<<endl;
				else
				cout<<a<<b<<0<<c<<d<<0<<p<<endl;
			}	
		}
	}
 return 0;	
 } 

