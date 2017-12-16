#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,l,i;
	char a,s[40005];
	cin>>n;
	cin>>a;
	getchar();
	cin.getline(s,sizeof(s));
	l=strlen(s);
	if(l>n)
	{
		for(i=l-n;i<l;i++)
		cout<<s[i];
	}	
	else
	{
		for(i=1;i<=n-l;i++)
		cout<<a;
		cout<<s;
	}
	return 0;
 } 
