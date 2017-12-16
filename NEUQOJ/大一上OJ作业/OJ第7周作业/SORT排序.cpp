#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int n;
	while(cin>>n) 
	{
		int a[20000];
		if(n==0)
		break;
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
} 
