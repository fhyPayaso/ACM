#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
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
	set<string>::iterator it;
	it=f.find(name);
	if(it!=f.end())
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}
