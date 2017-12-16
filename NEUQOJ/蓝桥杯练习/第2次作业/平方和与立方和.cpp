#include<iostream>
using namespace std;
int main()
{
	int  m,n,x,y;
	while(cin>>m>>n)
	{
		x=0;y=0;
		for(int i=m;i<=n;i++)
		{
			if(i%2==0)
			x+=i*i;
			else
			y+=i*i*i;
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
} 
