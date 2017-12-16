#include<iostream>
#include<algorithm>
using namespace std;
long long a[100050];
int main()
{
	
	//freopen("in.txt","r",stdin);
	int ti;
	cin>>ti;
	int n,k;
	while(ti--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int res=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]<=k) res++;
			else res=1;
		}
		cout<<res<<endl;	
	}
	return 0;
}
