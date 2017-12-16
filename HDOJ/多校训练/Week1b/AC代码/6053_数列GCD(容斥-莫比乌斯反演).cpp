#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn=100000+5;
const int mod=1000000000+7;
int mu[maxn],hole[maxn*2];

void mobius()
{
	mu[1]=1;
	for(int i=1;i<=maxn;i++)
	{
		for(int j=i+i;j<=maxn;j+=i)
			mu[j]-=mu[i];	
	}	
}

ll quick_pow(ll a,ll k)
{
	ll res=1;
	while(k)
	{
		if(k%2) res=res*a%mod;
		a=a*a%mod;
		k/=2;
	}
	return res;
}

int main()
{
	//freopen("1009.in","r",stdin);
	int n,t;
	mobius();
	scanf("%d",&t);
	
	for(int ti=1;ti<=t;ti++)
	{
		scanf("%d",&n);
		memset(hole,0,sizeof(hole));
		int minn=maxn;
		for(int i=1;i<=n;i++)
		{
			int	temp;
			scanf("%d",&temp);
			minn=min(minn,temp);
			hole[temp]++;
		}
		for(int i=1;i<=maxn*2;i++)  
		hole[i]+=hole[i-1];
		ll ans=0;
		
		for(int i=2;i<=minn;i++)
		{
			int g=1;
			for(int j=1;j*i<=maxn;j++)
			{
				int k=hole[i*(j+1)-1]-hole[i*j-1];
				g=(g*quick_pow(j,k))%mod;
			}
			
			ans=(ans-mu[i]*g+mod)%mod;	
		}
		
		printf("Case #%d: %lld\n",ti,ans);
	}	
	return 0;
}
