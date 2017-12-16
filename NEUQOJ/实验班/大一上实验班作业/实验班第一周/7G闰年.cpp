#include<iostream>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	if(t%4==0)
	{
		if(t%100==0)
		{
		if(t%400==0)
		{
			cout<<"yes"<<endl;
		}
			cout<<"no"<<endl;
		}
		else 
			cout<<"yes"<<endl;
	}
	else
		cout<<"no"<<endl;
	return 0;
 } 
