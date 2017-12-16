#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string temp;
	set<string> a;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		a.insert(temp);
	}
	cout<<a.size()<<endl;
	return 0; 
} 
