#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(a=1;a<40;a++)
		for(b=a;b<40;b++)
			for(c=b;c<40;c++)
			{
				if(a*a+b*b+c*c==1000)
				{
					cout<<a<<" "<<b<<" "<<c<<endl;
				}
				
			}
	
	
	return 0;
  }  
