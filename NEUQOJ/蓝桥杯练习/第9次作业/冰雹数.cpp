#include<iostream>
using namespace std;
int main()
{
	long long n,sum=0,temp;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		temp=i;
		while(temp!=1)
		{
			if(temp%2==0)		
				temp/=2;
			else if(temp%2==1)
				temp=temp*3+1;	
			if(temp>sum)
			sum=temp;
		}
	}
	cout<<sum<<endl;
	return 0;
 } 
