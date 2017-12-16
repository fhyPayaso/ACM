#include<iostream>
#include<string>
#include<set>
#include<iterator>
using namespace std;
int main()
{
	int n;
	string temp,name;
	set<string> f;
	cin>>n;
	cin>>name;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		f.insert(temp);
	}
	
	if(f.count(name))
	{
		f.erase(name);
		set<string>::iterator it;
		for(it=f.begin();it!=f.end();it++)
		cout<<*it<<" ";
	}
	else
	cout<<"song";

	return 0;
}
