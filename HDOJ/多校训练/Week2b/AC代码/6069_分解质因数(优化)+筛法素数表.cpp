#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const long long mod=998244353;
const long long maxn=1000000+5;
long long su[maxn],flag[maxn];
long long sum[maxn],a[maxn],t;

void table()
{
	
	memset(flag,0,sizeof(flag));
	t=0;
	for(long long i=2;i<maxn;i++)
	{
		if(flag[i]==0)
		{
			for(long long j=i+i;j<maxn;j+=i) flag[j]=1;
			su[++t]=i;
		}
	}
}

int main()
{
	
	//freopen("in.txt","r",stdin);
	table();
	int ti;
	scanf("%d",&ti);
	while(ti--)
	{
		
		long long l,r,k,p,ans=0;
		scanf("%lld %lld %lld",&l,&r,&k);
		
		for(long long i=1;i<=r-l+1;i++) 
		{
			a[i]=i+l-1;
			sum[i]=1;
		}
		
		for(long long  i=1;su[i]*su[i]<r;i++)
		{

			long long xx= l%su[i];//a[1]会WA，换成l才AC，(等数据) 
			if(xx==0) p=1;
			else
			{
				long long tx=su[i]-xx;
				p=tx+1;
			}

			for( ; p<=r-l+1 ; p+=su[i])
			{
				long long cnt=0;
				while(a[p]%su[i]==0)
				{
					a[p]/=su[i];
					cnt++;
				}	
				sum[p]=(sum[p]*(cnt*k%mod+1)%mod)%mod;
			}	
		}
		
		for(long long i=1;i<=r-l+1;i++)
		{
			if(a[i]!=1) sum[i]=sum[i]*(k+1)%mod;
			ans=(ans+sum[i])%mod;
		}			
		printf("%lld\n",ans);
	}	
	return 0;
}
