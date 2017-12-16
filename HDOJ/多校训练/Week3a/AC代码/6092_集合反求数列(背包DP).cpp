#include<iostream>
#include<cstring> 
using namespace std;
long long a[55],b[10010],dp[10010];//dp[i]代表和为i的集合的数量 
int main()
{
	//freopen("in.txt","r",stdin);
	int ti,n,m;
	scanf("%d",&ti);
	while(ti--)
	{
		cin>>n>>m;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(dp,0,sizeof(dp)); 
		
		for(int i=0;i<=m;i++)
		scanf("%d",&b[i]);
		
		int cnt=0;
		dp[0]=1;
		for(int i=1;i<=m;i++)
		{
			int temp=b[i]-dp[i];//将含i的集合数减去 
			for(int j=1;j<=temp;j++)
			{
				a[++cnt]=i;
				for(int k=m;k>=i;k--)
				dp[k]+=dp[k-i];//不含i的，和为k-i的集合数，分别加上一个i，就是和为k含i的集合数，每次对于相同的i单独看
				//此时dp[i~m]都是不含i的集合数 
			} 		
			//和为j的集合数(不含i) = 和为j的集合数(含i) - 和为j-i的集合数(不含i) 
		}
		for(int i=1;i<cnt;i++) printf("%d ",a[i]);
		printf("%d\n",a[cnt]);
	}
	
	return 0;
}
