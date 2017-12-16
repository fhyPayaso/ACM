#include<iostream>
using namespace std;
int main()
{
	int n,k,x,t,j;
	while(cin>>n>>k)
	{
		if(k==0)
		x=1;
		else
		{
			t=1,j=1;	
			for(int i=0;i<k;i++)
			{
				t*=n;
				n--;
			}
			while(k>0)	
			{
				j*=k;
				k--;
			}
			x=t/j;
		}
		cout<<x<<endl;
	}
	return 0;
} 
