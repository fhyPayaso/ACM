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
	int res=first.size();
	printf("%d",res);
	return 0;
 } 
