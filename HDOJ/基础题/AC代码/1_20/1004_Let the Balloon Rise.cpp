#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	
	int n;
	while(cin>>n)
	{
		if(!n) break;
		
		string temp;
		map< string ,int> a;
		
		for(int i=1;i<=n;i++)
		{
			cin>>temp;
			if(a.count(temp))
				a[temp]++;
			else
				a[temp]=1;
		}
		map<string ,int>::iterator it;
		int max=0;
		for(it=a.begin();it!=a.end();it++)
		{
			pair<string ,int > t=*it;
			if(t.second>max)
			max=t.second;	
		}
		for(it=a.begin();it!=a.end();it++)
		{
			pair<string ,int > t=*it;
			if(t.second==max)
			{
				cout<<t.first<<endl;
				break;
			}	
		}
	}
	
	return 0;
 } 
