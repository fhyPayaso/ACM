/*
白书原题，UVA11235，自己找题解
*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

typedef long long ll;
const int MaxN=100000+10;
int value[MaxN],cot[MaxN],num[MaxN];
int lef[MaxN],ri[MaxN];
int d[MaxN][30];

void solve(int n)
{
	memset(d,0,sizeof(0));
	for(int i=0; i<n; i++)
		d[i][0]=cot[num[i]];
	for(int j=1; (1<<j)-1<n; j++)
		for(int i=0; i+(1<<j)-1<n; i++)
			d[i][j]=max(d[i][j-1],d[i+(1<<(j-1))][j-1]);
}

int main()
{
	int n,q,l,r;
	while(scanf("%d",&n)&&n)
	{
		scanf("%d",&q);
		int x=1;
		memset(cot,0,sizeof(cot));
		for(int i=0; i<n; i++)
		{
			scanf("%d",&value[i]);
			if(value[i]!=value[i-1]&&i>0)
				x++;
			num[i]=x;
			cot[x]++;
		}
		x=0;
		for(int i=0; i<n; i++)
		{
			if(i>0&&value[i]!=value[i-1])
				x=i;
			lef[i]=x;
		}
		x=n-1;
		for(int i=n-1; i>=0; i--)
		{
			if(value[i]!=value[i+1]&&1!=n-1)
				x=i;
			ri[i]=x;
		}
		solve(n);
		for(int i=1; i<=q; i++)
		{
			scanf("%d%d",&l,&r);
			if(num[l-1]==num[r-1])
				printf("%d\n",r-l+1);
			else
			{
				int s=ri[l-1]-l+2,t=r-lef[r-1];
				int ans;
				l=l+s-1;
				r=r-1-t;
				if(l>r)
					ans=max(s,t);
				else
				{
					int k=0;
					while(1<<(k+1)<=r-l+1)
						k++;
					ans=max(max(d[l][k],d[r-(1<<k)+1][k]),max(s,t));
				}
				printf("%d\n",ans);
			}
		}
	}
	return 0;
}
