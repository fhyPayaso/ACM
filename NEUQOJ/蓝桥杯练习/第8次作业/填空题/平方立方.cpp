#include<iostream>
using namespace std;
int main()
{
	long long i,li,ping,a[10],temp,flag;
	for(i=1;i<1000;i++)
	{
		li=i*i*i;
		ping=i*i;
		flag=0;
		for(int j=0;j<10;j++) a[j]=0;
		while(li>0) 
		{
			temp=li%10;
			a[temp]++;
			li/=10;
		}
		while(ping>0) 
		{
			temp=ping%10;
			a[temp]++;
			ping/=10;
		}
		
		for(int j=0;j<10;j++)
		{
			if(a[j]!=1)
			flag=1;
		}
		if(flag==0)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
 } 
