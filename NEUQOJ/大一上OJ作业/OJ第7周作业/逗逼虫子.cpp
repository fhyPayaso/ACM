#include<iostream>
using namespace std;
int main()
{
	int n,u,d;
	while(cin>>n>>u>>d)
	{
		if(n==0&&u==0&&d==0)
		break;
		int t=0,l=0;
		while(l+u<n)
		{
			l+=u-d;
			t+=2;
		}
		cout<<t+1<<endl;
	}
	return 0;
} 
