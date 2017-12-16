#include<iostream>
using namespace std;
int n,flag;
void fuck(int n)
{
	int temp;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		for(int j=1;j*(j+1)/2<=temp;j++)
		flag^=j-1;
	}
	if(flag)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}

int main()
{
	
	int n;
	cin>>n;
	fuck(n);
	return 0;
 } 
