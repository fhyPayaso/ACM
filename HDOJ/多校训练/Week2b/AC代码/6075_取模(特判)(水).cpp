#include<iostream>
using namespace std;
const int maxn=100000+5;
long long temp;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&temp);
			if(temp%2==1) cnt++;
		}
		if(cnt>=n/2)
		printf("%d %d\n",2,1);
		else
		printf("%d %d\n",2,0);
	}
	return 0;
}
