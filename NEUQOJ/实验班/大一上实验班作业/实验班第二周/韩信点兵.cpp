#include<iostream> 
using namespace std;
int mian()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=11;i<=100;i++)
	{
		if(i%3==a&&i%5==b&&i%7==c)
		cout<<i<<endl;
		else
		cout<<"no answer"<<endl;
	}

	return 0;
}
