#include<iostream>
#include<cmath> 
using namespace std;
int by(int a,int b)
 {
	while(b!=0)
	{
		int t=a%b;
		a=b;
		b=t;
	}
	return(a);
 }
int main()
{
	int x,y;
	cin>>x>>y;
	int p=x*y;
	int k=(int)sqrt(p);
	int n=0;
	for(int i=x;i<=k;i++)
	{
		if((p%i==0)&&(by(p/i,i)==x))
		n++;
	}
	n*=2;
	cout<<n;
	return 0;
 } 
 
 

	
	 
