#include<iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	{
		int b,s=0;
		if(a==0)
		break;
		for(int i=0;i<a;i++)
		{
			cin>>b;
			s+=b;
		}
		cout<<s<<endl;
	}
	return 0;
} 
