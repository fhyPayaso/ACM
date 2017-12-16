#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	string temp,s[120005];
	set<string> a,b;
	int len=0;
	while(cin>>temp)
	{
		a.insert(temp);
		s[++len]=temp;
	};
	for(int i=1;i<=len;i++)
	{
		for(int j=1;j<=len;j++)
		{
			string temp=s[i]+s[j];
			if(a.count(temp))
			b.insert(temp);
		}
	}
	set<string>::iterator it;
	for(it=b.begin();it!=b.end();it++)
	cout<<*it<<endl;
	
	return 0;
 } 
