#include<iostream>
using namespace std;
int main()
{
	int n,ji=0,ou=0,temp;;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		if(temp%2==0)
		ou++;
		else
		ji++;
	}
	cout<<ji<<" "<<ou;
	return 0;
 } 
