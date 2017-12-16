#include<iostream>
using namespace std;
int main()
{
	char n;
	while((n=getchar())!=EOF)
	{
	if(n>='a'&&n<='y')
		{		
			n=n+1;
			cout<<n;
		}
	    	
	else if(n=='z')
		{	
			n=n-25;
			cout<<n;
		}
	else
		{
			cout<<n;
		}
		
	}
	return 0;
 } 
