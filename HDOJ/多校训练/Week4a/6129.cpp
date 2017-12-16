#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn=200010;
ll a[maxn],b[maxn];

int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int ti;
	ll m,n;
	cin>>ti;
	while(ti--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cin>>n>>m;
		
		for(int i=1;i<=n;i++) cin>>a[i];
			
		for(int i=1;i<=n;i++)
		{
			int x=i-1;
			int y=m+i-2;
			
			if((y&x)==x)
			{
				for(int j=i;j<=n;j++)
				b[j]^=a[j-i+1];
			}
		}
		
		for(int i=1;i<n;i++)
		cout<<b[i]<<" ";
		cout<<b[n]<<endl;
	}
	
	return 0;
}
