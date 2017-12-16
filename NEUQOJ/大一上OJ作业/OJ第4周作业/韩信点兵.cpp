#include<iostream> 
using namespace std;
int main()
{
	int a,b,c,t=0;;
	cin>>a>>b>>c;
	for(int i=11;i<=100;i++)
	{
		if(i%3==a&&i%5==b&&i%7==c)
		cout<<i<<endl;
		else
		t++;
	}
	if(t==90)
	cout<<"no answer"<<endl;
	return 0;
}
