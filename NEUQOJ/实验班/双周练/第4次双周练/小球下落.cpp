#include<iostream>
using namespace std;
int deep,k,num;

int f()
{
	num=1;
	for(int i=0; i<deep; i++)
	{
		if(k%2==1)
		{
			num*=2;
			k=(k+1)/2;
		}
		else
		{
			num=2*num+1;
			k/=2;
		}
	}
	return num/2;

}

int main()
{

	cin>>deep;
	while(cin>>k)
	cout<<f()<<endl;
	return 0;
}
