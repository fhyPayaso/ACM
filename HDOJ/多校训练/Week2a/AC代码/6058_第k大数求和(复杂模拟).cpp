#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn=1e6+7;
int a[maxn],b[maxn];//储存下标
int main()
{
	//freopen("in.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		
		long long ans=0;
 
		for(int i=1;i<=n;i++)
		{
			//每次计算出以x作为第K大数的所有区间的个数 sum
			int x=a[i],sum=0,cnt=0,j;
			b[++cnt]=i;//以当前元素为第一个值 
			
			//记录从i开始，一直到第k个比x大的数的下标 
			for(j=i+1;j<=n&&cnt<k;j++)
			{
				if(a[j]>x)
				b[++cnt]=j;
			}
 
			
			if(cnt==k)//i之后存在k个比x大的数 
			{
				int num=1;
				//第k个比x大的数之后连续有多少个比x小的 
				for(;j<=n;j++) 
				{
					if(a[j]<x) num++;
					else break;
				}
				sum+=num;
				
				for(j=i-1;j>=1&&cnt>=1;j--)
				{
					if(a[j]<x) sum+=num;//每出现一个比X小的数，就又有num个区间符合 
					else//每次出现一个比x大的数 
					{
						if(cnt==1) break;//右侧不再有比x大的数 
						num=b[cnt]-b[cnt-1]; 
						cnt--;//右侧比x大的数减少一个 
						sum+=num; 
					}	
				}			
			}
			else//i右侧不足k个比x大的数 
			{
				for(j=i-1;j>=1&&cnt<k;j--) 
				{
					if(a[j]>x)
					b[++cnt]=j; //向左找，直到有k个比x大的 
				}
				if(cnt==k) 
				{
					sort(b+1,b+cnt+1);
					int num=n-b[cnt]+1;
					sum+=num;
					for(;j>=1&&b[cnt]>=i;j--)
					{
						if(a[j]<x) sum+=num;
						else
						{
							if(b[cnt]==i) break;
							num=abs(b[cnt]-b[cnt-1]);
							cnt--;
							sum+=num;
						}
					}
				}
			}	
			ans+=(long long)sum*x;
		}
		printf("%lld\n",ans);
		
	}
	return 0;
}
