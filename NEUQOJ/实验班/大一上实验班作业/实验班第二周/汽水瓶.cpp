#include<iostream>
using namespace std;
int main()
{
	int n,k,t;
	while(cin>>n)
	{
		if(n==0)
		break;
		else
		{
			t=0;
			while(n>2)
			{
				k=n%3;
				n/=3;
				t+=n;
				n+=k;	
			}
			if(n==2)
			t++;
			cout<<t<<endl;
		}	
	}
	return 0;
}
