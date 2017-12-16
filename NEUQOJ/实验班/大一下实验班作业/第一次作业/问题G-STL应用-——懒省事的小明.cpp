#include<iostream>
#include<set>
using namespace std;
int main()
{
	long long n,m,temp,sum;
	cin>>n;
	
	while(n--)
	{
		multiset<long long> a;
		sum=0;
		cin>>m;
		for(int i=1;i<=m;i++)
		{
			cin>>temp;
			a.insert(temp);
		}
		
		while(a.size()>1)
		{
			multiset<long long>::iterator it=a.begin();  
			long long x=*it;
			long long y=*(++it);
			a.erase(a.begin());
			a.erase(a.begin());
			a.insert(x+y);
			sum+=x+y;
		}
		cout<<sum<<endl;
	}
	return 0;
}
