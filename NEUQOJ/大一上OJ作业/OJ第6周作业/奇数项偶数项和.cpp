#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	long long P=0,Q=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		P+=a[i];
		else
		Q+=a[i];
	}
	cout<<abs(P-Q)<<endl;
	return 0;
}
