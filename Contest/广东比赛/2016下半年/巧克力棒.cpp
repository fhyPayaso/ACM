#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	long long n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int x=0;
		cin>>n;
		while(n>0)
		{
			int j=0;
			while(pow(2,j)<=n)
			j++;
			j--;
			n=n-pow(2,j);
			x+=pow(2,j)-1;
		}
		cout<<x<<endl;	
	}
	return 0;
} 
