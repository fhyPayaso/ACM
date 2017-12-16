#include<cstdio>
#include<cstring>
#include<vector>
#define N 100005
using namespace std;
vector<int> node[N];
// dp[i][0],dp[i][1];
// 分别表示选i结点和不选能得到的最大分数
int dp[N][2];
int v[N],vis[N];
int n,a,b;
void dfs(int u)
{
	dp[u][1] = v[u];
	dp[u][0] = 0;
	vis[u]=1;
	for(int i=0 ; i<node[u].size(); i++)
	{
		if(!vis[node[u][i]])
		{
			dfs(node[u][i]);

			dp[u][1] += max(dp[node[u][i]][1],dp[node[u][i]][0]);

		}
		else
		{
			dp[u][1] = max(dp[u][1],v[u]);
			dp[u][0] = max(dp[u][0],0);
		}
	}
}

void init()
{
	memset(v,0,sizeof(v));
	memset(dp,0,sizeof(dp));
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++)
	{
		scanf("%d",&v[i]);
	}
	for(int i=1 ; i<n ; i++)
	{
		scanf("%d%d",&a,&b);
		node[a].push_back(b);
		node[b].push_back(a);
	}
}

int main()
{
	init();

	dfs(1);
	int ans = -1;
	for(int i=1 ; i<=n ; i++)
	{
//      printf("dp[%d][1]:%d\n",i,dp[i][1]);
//      printf("dp[%d][0]:%d\n",i,dp[i][0]);
		ans = max(ans,dp[i][1]);
		ans = max(ans,dp[i][0]);
	}
	printf("%d\n",ans);
	return 0;
}
