#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int k,n,len=1,i;
	cin>>k>>n;
	int a[15];
	unsigned long long  sum=0;
	while(n)
	{
		a[len]=n%2; n/=2;
		if(n) len++;
	}
	for(i=1;i<=len;i++)
	{
		if(a[i]==1)
		sum+=pow(k,i-1);
	}
	cout<<sum<<endl;
	return 0;
}
