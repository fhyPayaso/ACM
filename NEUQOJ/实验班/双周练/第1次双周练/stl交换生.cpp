#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		map<int,int> a;
		int t1,t2;
		for(int i=1;i<=n;i++)
		{
			cin>>t1>>t2;
			a[t1]=t2;
		}
		int flag=0;
		map<int,int>::iterator it;
		for(it=a.begin();it!=a.end();it++)
		{
			t1=*it.key;
			//t2=*it.second;
			
		}
		if(flag=0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
