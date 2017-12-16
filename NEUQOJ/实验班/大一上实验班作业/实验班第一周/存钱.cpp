#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a=1000;
	for(int i=1;i<=5;i++)
	{
		a=a/1.0756+1000;
	}	
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<a-1000<<endl;
	return 0;
} 
