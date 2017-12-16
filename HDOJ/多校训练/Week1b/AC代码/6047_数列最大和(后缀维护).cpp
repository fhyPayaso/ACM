#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=250000+10;
const long long mod=1000000000+7;
int a[maxn*2+5],b[maxn+5],ma[maxn*2+5];

int main()
{
	//freopen("1003.in","r",stdin);
	std::ios::sync_with_stdio(false);  
	int n;
	while(cin>>n)
	{
		unsigned long long sum=0;
		for(int i=1;i<=n;i++) 
		{
			cin>>a[i];
			a[i]-=i;
		}
		for(int i=1;i<=n;i++) cin>>b[i];
		sort(b+1,b+n+1);
		int mm=-1;
		for(int i=n;i>0;i--)
		{
			ma[i]=max(a[i],mm);
			mm=ma[i];
		}	

		for(int i=n+1;i<=2*n;i++)
		{
			a[i]=ma[b[i-n]]-i;
			sum+=((a[i]+i)%mod);
			sum%=mod;
			
			ma[i]=a[i];
			int x=i-1;
			while(a[i]>ma[x]) 
			{
				ma[x]=a[i];
				x--;
			}				
		}
		cout<<sum<<endl;
	}
	return 0;
} 
