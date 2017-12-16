#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int m,n,i,j,k,x;
	while(cin>>m>>n)
	{
		int dp[m+1][n+1],a[n+1],temp[n+1];
	
		for(i=1;i<=n;i++) cin>>a[i]; 
		memset(dp,0,sizeof(dp));
		memset(temp,0,sizeof(temp));
		
		for(i=1;i<=m;i++)
		{
			x=-32769;
			for(j=i;j<=n;j++)
			{
				for(k=i;k<=j-1;k++)
				x=max(x,dp[i-1][k]);
				dp[i][j]=max(dp[i][j-1]+a[j],x+a[j]);
			}
		}
		cout<<dp[m][n]<<endl;
	}
	
	return 0;
}
