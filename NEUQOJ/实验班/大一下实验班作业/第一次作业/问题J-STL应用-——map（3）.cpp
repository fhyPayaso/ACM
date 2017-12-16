#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int n;
	string temp;
	map<string,int> a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		a[temp]=i;
	}
	cin>>temp;
	if(a.count(temp))
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}
