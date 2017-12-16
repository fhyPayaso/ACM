#include<iostream>
using namespace std;
int main()
{
	int n,a[1001];
	a[1]=1;
	a[2]=1;
	while(cin>>n)
	{
		if(n<3)
		cout<<1<<endl;
		else
		{
			for(int i=3;i<=n;i++)
			{
				a[i]=a[i-2]*2+a[i-1];
				a[i]%=19260817;
			}
			cout<<a[n]<<endl;
		}
	}
	return 0;
}
