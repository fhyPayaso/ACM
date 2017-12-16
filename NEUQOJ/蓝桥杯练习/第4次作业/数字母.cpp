#include<iostream>
using namespace std;
int main()
{
	char a;
	int t=0;
	while((a=getchar())!=EOF)
	{
		if((a<='z'&&a>='a')||(a<='Z'&&a>='A'))
		t++;	
	}
	cout<<t;
	return 0;
 } 
