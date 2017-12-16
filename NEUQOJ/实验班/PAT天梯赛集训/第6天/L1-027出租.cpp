#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<char> f;
	char temp,s[12];
	for(int i=1;i<=11;i++)
	{
		cin>>temp;
		s[i]=temp;
		f.insert(temp);
	}
	int l=f.size(),e;
	e=l;
	char x[l];
	set<char>::iterator it;
	for(it=f.begin();it!=f.end();it++)
	x[--l]=*it;
	
	cout<<"int[] arr = new int[]{";
	for(int i=0;i<e-1;i++) cout<<x[i]<<",";
	cout<<x[e-1]<<"};"<<endl;
	
	cout<<"int[] index = new int[]{";
	for(int i=1;i<11;i++)
	{
		for(int j=0;j<e;j++)
		{
			if(x[j]==s[i])
			cout<<j<<",";
		}
	}
	for(int j=0;j<e;j++)
	{
		if(x[j]==s[11])
		cout<<j<<"};";
	}
	return 0;
}
