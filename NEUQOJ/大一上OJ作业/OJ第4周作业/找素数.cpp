#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int t=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			t++;
		}
		if(t==0)
		cout<<i<<endl;
	}
	return 0;
 } 
