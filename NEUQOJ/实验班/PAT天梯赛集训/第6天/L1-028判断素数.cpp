#include<iostream>
#include<cmath>
using namespace std;
int f(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) 
	return 0;
	return 1;
}
int main()
{
	int x,n;
	cin>>x;
	while(x--)
	{
		cin>>n;
		if(f(n)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
