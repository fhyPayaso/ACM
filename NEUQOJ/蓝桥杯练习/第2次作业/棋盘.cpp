#include<iostream>
using namespace std;
int main()
{
	int t,m,n;
	long long sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>m>>n;
		m--;n--;
		for(;m!=0&&n!=0;m--,n--)
		sum+=m*n;
		cout<<sum<<endl;
	}
	return 0;
} 
