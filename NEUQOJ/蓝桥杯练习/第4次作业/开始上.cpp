#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,i,flag=0;
	cin>>n;
	cin>>a;
	cin>>b;
	if(a<b) 
	{
		flag=1;
	} 
	for(i=2;i<n;i++)
	{
		cin>>c;
		if(a>b&&b<c)
		{
			flag=1;
		} 
		a=b;
		b=c;
	}
	if(b>c) flag=1;
	if(flag) cout<<"YES";
	else cout<<"NO";
	return 0;
}
