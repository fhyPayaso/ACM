#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,s=0,t=0;
	while(cin>>n>>m)
	{
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			s+=a[n-1-i];
			t++;
			if(s>=m)
			break;
		}
		cout<<t<<endl;
	}
	return 0;
} 
