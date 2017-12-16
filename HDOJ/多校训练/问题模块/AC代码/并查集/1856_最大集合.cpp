#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn=10000000+10;
int uf[maxn],num[maxn];//ÓÃlong long¾¹È»MLE 

int dfs(int step)
{
	if(uf[step]==step)
		return step;
	else
		uf[step]=dfs(uf[step]);	
	return uf[step];
}

void ufind(int x,int y)
{
	int fx=dfs(x);
	int fy=dfs(y);
	if(fx!=fy) 
	{
		uf[fy]=fx;
		num[fx]+=num[fy];
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	int n,x,y;
	while(cin>>n)
	{
		
		for(int i=0;i<maxn;i++) uf[i]=i,num[i]=1;
		while(n--)
		{
			cin>>x>>y;
			ufind(x,y);
		}
		int ans=-1;
		for(int i=1;i<maxn;i++)
		{
			if(ans<num[i])
			ans=num[i];
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
