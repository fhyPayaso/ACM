#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	char a[10000];
	float t=0,i=0;
	int l;
	while(cin>>a)
	{
		l=strlen(a);
		t+=l;
		i++;
	}
	t/=i;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<t;
	return 0;
} 
