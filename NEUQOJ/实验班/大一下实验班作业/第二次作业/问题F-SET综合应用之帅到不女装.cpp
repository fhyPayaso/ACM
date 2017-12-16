#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	int n,k,m;
	int i,j;
	string temp;
	multiset<string> name;
	set<string> list,cha;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		for(j=1;j<=m;j++)
		{
			cin>>temp;
			name.insert(temp);
		}
	}
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>temp;
		cha.insert(temp);
		if(!name.count(temp))
			list.insert(temp);
	}
	
	multiset<string>::iterator it;
	for(it=name.begin();it!=name.end();it++)
	{
		if(!cha.count(*it)&&name.count(*it)==1)
		list.insert(*it);
	}
	set<string>::iterator iter;
	
	if(list.empty())
		cout<<"NO ONE IS HANDSOME";
	else
		for(iter=list.begin();iter!=list.end();iter++)
		cout<<*iter<<" ";
	
	return 0;
}
