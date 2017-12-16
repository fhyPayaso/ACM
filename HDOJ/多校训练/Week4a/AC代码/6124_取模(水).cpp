#include<iostream>
using namespace std;
typedef long long ll;
int main()
{	
	long long ti,x;
	cin>>ti;
	while(ti--)
	{
		cin>>x;
		
		if(x%2==0)  cout<<x/2+1<<endl;
		else		cout<<x/2+2<<endl;
	}
	return 0;
}
