#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,now=0,next;
	cin>>n;
	while(cin>>next)
	{
		if(next>now)
		{
			sum+=(next-now)*6;
			sum+=5;
		}
		else
		{
			sum+=(now-next)*4;
			sum+=5;
		}
		now=next;
	}
	cout<<sum;
	return 0;
}
