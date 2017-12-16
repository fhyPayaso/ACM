#include<iostream>
using namespace std;
int main()
{
	int change(int k);
	int s,m,fm,i,j;
	cin>>s;
	for(i=0;i<s;i++)
	{
		cin>>m;
		for(j=0;j<8;j++)
		{
			fm=change(m);
			if(m==fm)
			break;
			m+=fm;
		}
		if(j<8)
		cout<<j<<endl;
		else
		cout<<"0"<<endl;
	}
	return 0;
}
int change(int k)
{
	int l=0,t;
	while(k)
	{
		t=k%10;
		l=10*l+t;
		k/=10;
	}
	return l;
}
