#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		long long temp=pow(2,n)+1;
		cout<<temp<<endl;
	}
	return 0;
}
