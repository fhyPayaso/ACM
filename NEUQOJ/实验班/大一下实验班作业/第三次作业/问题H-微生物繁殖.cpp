#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		for(int i=1;i<=120;i++)
		{
			
			if(i%6==0)	x*=2; 
			if(i%4==0)	y*=2;
			if(i%2==1)	y-=x;
		}
		if(y>=0)
			cout<<y<<endl;
		else 
			cout<<0<<endl;
	}
	return 0;
}

