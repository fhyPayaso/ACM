#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	unsigned long long  a[1005],b[1005];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++) cin>>b[i];
	
	unsigned long long mi=18446744073709551614;
	for(int i=1;i<=m-n+1;i++)
	{
		unsigned long long temp=0;
		for(int j=1;j<=n;j++)
		{
			unsigned long long k=(a[j]-b[i+j-1])*(a[j]-b[i+j-1]);
			temp+=k;
		}	
		if(mi>temp)
		mi=temp;	
	}
	cout<<mi<<endl;
	
	return 0;
 } 
