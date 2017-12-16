#include<iostream>
using namespace std;
void m(char x,char y)
{
	cout<<x<<"---"<<y<<endl;
}
void h(int n,char a,char b,char c)
{
	if(n==1)
		m(a,c);
	else
		{
			h(n-1,a,c,b);
			m(a,c);
			h(n-1,b,a,c);
		}
}
int main()
{
	int m;
	cin>>m;
	h(m,'A','B','C');
	return 0;
}

