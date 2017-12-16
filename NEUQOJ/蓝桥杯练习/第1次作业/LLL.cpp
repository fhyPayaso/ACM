#include<iostream>
using namespace std;
int main()
{
	int x,y;
	for(x=100;x<1000;x++)
	{
		y=1333-x;
		if(x/100==y%10&&y/100==x%10&&x%100-x%10==y%100-y%10)
		cout<<x<<"+"<<y<<"=1333"<<endl;
	}
	return 0;
} 
