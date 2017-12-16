#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,temp;
	set<int> first;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&temp);
		first.insert(temp);
	}
	set<int>::iterator it;
	for(it=first.begin();it!=first.end();it++)
	printf("%d ",*it);

	return 0;
}
