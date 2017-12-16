#include<iostream>
using namespace std;
int main()
{
	int n,x;
	double t;
	char a;
	cin>>n>>a;
	t=n;
	x=n;
	t/=2;
	if(t-n/2>=0.5) n=n/2+1;
	else n/=2;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=x;j++)
		cout<<a;
		cout<<endl;
	}

	return 0;
}
