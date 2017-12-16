#include <iostream>
#include <cmath>
using namespace std;
long long z(long long a,long long b)
{
 	long long t;
 	while(b!=0)
 	{
  		t=b;
  		b=a%b;
  		a=t;
 	}
 	if(a==1)
  		return 1;
 	else
  		return 0;
}
int main()
{
 	long long x,y;
 	cin>>x>>y;
 	long long i,j,n=0;
 	for(i=x;i<=y;i+=x)
 	{
  		j=x*y/i;
  		if(i*j==x*y&&j%x==0)
  		{
   			if(z(i/x,j/x))
    		n++;
  		} 
 	}
 	cout<<n<<endl;
	return 0;
}
