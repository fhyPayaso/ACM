#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string temp;
	map<string,int> a;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		if(a.count(temp))
			a[temp]++;
		else
			a[temp]=1;
	}
	map<string,int>::iterator it;
	for(it=a.begin();it!=a.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
	return 0; 
} 
