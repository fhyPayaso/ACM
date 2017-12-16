#include<iostream>
using namespace std;
int main()
{
	long long n,a[100005];
	int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	for(int i=1;i<=n;i++)
	{
		int flag1=0,flag2=0;
		for(int j=1;j<=n;j++)
		{
			if(a[i]>a[j]) flag1=1;
			if(a[i]<a[j]) flag2=1;
		}
		if(flag1==1&&flag2==1)
		sum++;
	}
	cout<<sum<<endl;
	
	return 0;
}
