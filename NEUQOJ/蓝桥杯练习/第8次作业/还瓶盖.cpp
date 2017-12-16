#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,temp,x;
	cin>>n;
	x=n;
	while(n>=3)
	{
		temp=n%3;
		n/=3;
		sum+=n;
		n+=temp;
	}
	
	cout<<sum+x<<endl;
	return 0;
} 

