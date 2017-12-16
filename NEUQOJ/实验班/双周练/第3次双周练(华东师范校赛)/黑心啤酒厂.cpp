#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int t;
	while(b)
	{
		int t=a%b;
		a=b;
		b=t;	
	}
	return a;
}
int main()
{
	int x,n;
	scanf("%d%d",&x,&n);
	for(int p=2;p<=n;p++)
	{
		int t=gcd(x,p);
		cout<<p/t<<endl;
	}
	return 0;
 } 

 
 
 
