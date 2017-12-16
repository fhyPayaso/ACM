#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string n;
	cin>>n;
	int a[10];
	memset(a,0,sizeof(a));
	
	for(int i=0;i<n.length();i++)
	{
		int temp=n[i]-'0';
		a[temp]++;
	}
	
	for(int i=0;i<10;i++)
	{
		if(a[i])
		cout<<i<<":"<<a[i]<<endl;	
	}
	
	return 0;
}
