#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		int j,s=1,t=0,y=0;
		int x=0;
		for(int i=0;i<10000;i++)
		{	
			for(j=1;j<=s;j++)
			{
				x+=s;
				t++;
				if(t>=n)
				{
					y=1;
					break;
				}	
			}
			s++;
			if(y==1)break;	
		}
		cout<<x<<endl;
	}
	return 0;
}
