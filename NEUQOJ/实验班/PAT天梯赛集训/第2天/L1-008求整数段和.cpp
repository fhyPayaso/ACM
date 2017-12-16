#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,sum=0,cot=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		cout<<setw(5)<<i;
		sum+=i;
		cot++;
		if(cot==5&&i!=b)
		{
			cot=0;
			cout<<endl;
		}
	}
	cout<<endl<<"Sum = "<<sum;
	
	return 0;
}
