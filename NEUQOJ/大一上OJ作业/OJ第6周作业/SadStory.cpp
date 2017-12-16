#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a[6];
		for(int j=0;j<6;j++)
		cin>>a[j];
		sort(a,a+6);
		int x1=a[4]+a[5];
		int x2=a[1]+a[2]+a[3];
		if(x1>x2)
		cout<<"What a sad story!"<<endl;
		else if(x1<x2)
		cout<<"It will be a sad story!"<<endl;
		else
		cout<<"HeHe!"<<endl;
	}
	return 0;
}
