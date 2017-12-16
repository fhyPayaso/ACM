#include<iostream>
using namespace std;
int main()
{
	int n,s;
	while(cin>>n)
	{
		s=1;
		for(int i=1;i<=n;i++)
		s*=3;
		cout<<s-1<<endl;
	}
	return 0;
} 
