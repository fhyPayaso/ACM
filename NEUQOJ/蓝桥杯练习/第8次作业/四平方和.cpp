#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k,l;
	
	for(i=0;i<2300;i++)
	for(j=i;j<2300;j++)
	for(k=j;k<2300;k++)
	{
		l=n-i*i-j*j-k*k;
		l=sqrt(l);
		if(n==i*i+j*j+k*k+l*l)
		{
			cout<<i<<" "<<j<<" "<<k<<" "<<l;
			return 0;
		}	
	}
	return 0;
}  
