#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;

	for(a=1;a<100;a++)
	{
		for(b=1;b<100;b++)
		{
			if(a*b==6*(a+b)&&abs(a-b)<=8)
			{
				cout<<a<<endl;
				return 0;
			}
			
		}
	}

	return 0; 
} 
