#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,j=0;
	cin>>n;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			j=1;
			cout<<"N";
			break;
		}
	}
	if(j==0) cout<<"Y";
	return 0;
}
