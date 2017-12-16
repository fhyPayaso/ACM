/*
10^k<2^m 两边同时取10为底的对数
k < m*lg2 
*/
#include<iostream>
using namespace std;
double temp=0.30102999566398;
int main()
{
	int m;
	int x=1;
	while(cin>>m)
	{	
		cout<<"Case #"<<x++<<": ";
		int res=m*temp;
		cout<<res<<endl;
	}
	
	return 0;
 } 
