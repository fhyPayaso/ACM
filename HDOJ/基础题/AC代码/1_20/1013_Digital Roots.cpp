#include<iostream>
#include<string>
using namespace std;

unsigned long long f(unsigned long long x)
{
	int res=0;
	while(x)
	{
		int temp=x%10;
		res+=temp;
		x/=10;
	}
	return res;
}
int main()
{
	string str;
	while(cin>>str)
	{
		int n=0;
		for(int i=0;i<str.size();i++)
		n+=str[i]-'0';

		if(!n)    break;
		while(n>9)n=f(n);
		cout<<n<<endl;
	}
	return 0;
}
