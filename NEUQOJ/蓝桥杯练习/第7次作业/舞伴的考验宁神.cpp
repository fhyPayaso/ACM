#include<iostream>
using namespace std;
int main()
{
	int mod=1000000;
	int n,i,sum=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum*=i;
		while(sum%10==0)
		sum/=10;
		if(sum>mod)
		sum%=mod;
	}
	while(sum%10==0)
	sum/=10;
	cout<<sum%10<<endl;
	return 0;
} 
