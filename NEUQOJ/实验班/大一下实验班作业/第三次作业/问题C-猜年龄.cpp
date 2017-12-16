#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j;
	
	while(cin>>n)
	{
		int flag=0;
		for(i=1;i<=100;i++)
			for(j=1;j<=100;j++)
			if(i!=j&&flag==0)
			{
				int t1=i*j;
				int t2=i+j;
				if(t1==t2*n&&abs(i-j)<=8)
				{
					cout<<i<<" "<<j<<endl;
					flag=1;
				}
			}
		if(flag==0)
		cout<<-1<<endl;	
	}
	return 0;
}
