#include<iostream>
using namespace std;
int main()
{
	int n,m;
	
	while(cin>>n>>m)
	{
		int t=1;
		for(int i=1; i<=m; i++)
		{
			t*=n;
			t/=i;
			n--;
		}
		cout<<t<<endl;
	}
	return 0;
}
