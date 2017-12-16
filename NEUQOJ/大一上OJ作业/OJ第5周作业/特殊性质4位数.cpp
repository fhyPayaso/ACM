#include<iostream>
using namespace std;
int main()
{
	for(int i=1000;i<=9999;i++)
	{
		int l=i/100;
		int r=i%100;
		if((l+r)*(l+r)==i)
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
} 
