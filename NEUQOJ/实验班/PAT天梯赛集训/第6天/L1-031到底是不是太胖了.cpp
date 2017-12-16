#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	int n,h,w;
	cin>>n;
	while(n--)
	{
		cin>>h>>w;
		double bw=(h-100)*0.9*2;
		if(abs(w-bw)<bw*0.1)
			cout<<"You are wan mei!"<<endl;
		else if(w-bw<0)
			cout<<"You are tai shou le!"<<endl;
		else if(w-bw>0)
			cout<<"You are tai pang le!"<<endl;		
	}
	return 0;
}
