#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m,n;
	for(int i=1;i<=8;i++)
	{
		int t,m1,m2,x;
		t=(i+12)*(i+12)-4*6*i;
		if(t>0)
		{
			m1=((i+12)+sqrt(t))/2;
			m2=((i+12)-sqrt(t))/2;
			n=m-i;
			if(m1>0)
			{
			m=m1;
			if(n>0)
			cout<<n<<" ";
			x+=1;
			if(x>1)
			break;
			}
			
			if(m2>0)
			{
			m=m2;
			if(n>0)
			cout<<n<<" ";
			}
				
		}
	}
	return 0;
} 
