#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a[6],x=0,y=0;
		for(int j=0;j<6;j++)
		cin>>a[j];
		sort(a,a+6);
		x=a[5]+a[4];
		y=a[1]+a[2]+a[3];
		if(x>y)
		cout<<"it will be a happy story"<<endl;
		else if(x<y)
		cout<<"what a happy story"<<endl;
		else
		cout<<"it must be a happy story"<<endl;
	}
	return 0;
} 
