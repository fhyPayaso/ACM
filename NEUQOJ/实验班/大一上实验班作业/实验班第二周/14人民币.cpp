#include<iostream>
using namespace std;
int main()
{
	int m,x,y,z,i=0;
	cin>>m;
	if(m==100)
	{
		for(x=1;x<=20;x++)
		for(y=1;y<=50;y++)
		for(z=1;z<=100;z++)
		{
			if(5*x+2*y+z==100)
			i++;
		}
		cout<<i<<endl;
	}
	if(m==50)
	{
		for(x=1;x<=20;x++)
		for(y=1;y<=50;y++)
		for(z=1;z<=100;z++)
		{
			if(5*x+2*y+z==50)
			i++;
		}
		cout<<i<<endl;
	}
	if(m==20)
	{
		for(x=1;x<=20;x++)
		for(y=1;y<=50;y++)
		for(z=1;z<=100;z++)
		{
			if(5*x+2*y+z==20)
			i++;
		}
		cout<<i<<endl;
	}
	if(m==10)
	{
		for(x=1;x<=20;x++)
		for(y=1;y<=50;y++)
		for(z=1;z<=100;z++)
		{
			if(5*x+2*y+z==10)
			i++;
		}
		cout<<i<<endl;
	}
	
	return 0;
}
