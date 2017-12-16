#include<iostream>
#include<string>
using namespace std;
void AN(int nn);
void SN(int nn);
int main()
{
	int n;
	cin>>n;
	SN(n);
	return 0;
}
void AN(int nn)
{
	cout<<"sin(1";
	if(nn>1)
	{
		for(int i=2;i<=nn;i++)
		{
			if(i%2==0) cout<<"-";
			else cout<<"+";
			cout<<"sin("<<i;
		}
	}
	for(int i=1;i<=nn;i++)
	cout<<")";
}
void SN(int nn)
{
	for(int i=1;i<nn;i++)
	cout<<"(";
	for(int i=1;i<nn;i++)
	{
		AN(i);
		cout<<"+"<<nn+1-i<<")";
	}
	AN(nn);
	cout<<"+1";
}


