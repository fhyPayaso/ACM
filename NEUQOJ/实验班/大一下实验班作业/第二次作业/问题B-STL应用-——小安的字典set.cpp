#include<iostream>
#include<set>
#include<string>
#include<cctype>
#include<sstream>
using namespace std;
int main()
{
	set<string> f;
	string temp,t;
	
	while(cin>>temp)
	{
		for(int i=0;i<temp.length();i++)
		isalpha(temp[i]) ? temp[i]=tolower(temp[i]):temp[i]=' ';
		stringstream ss(temp);
		while(ss>>t)
		f.insert(t);
	}
	set<string>::iterator it;
	for(it=f.begin();it!=f.end();it++)
	cout<<*it<<endl; 
	return 0;
}
