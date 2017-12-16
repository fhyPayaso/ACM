//惭愧，参考了网上模板，向原作者致敬，学到了
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn=80+5;
int n,m;
int a[maxn];

const int modnum=4;
const int mod=10000;
const int maxl=10;

struct num
{
	int a[maxl];

	num()
	{
		memset(a,0,sizeof(a));
	}

	num operator + (const num &b)
	{
		num c;
		c.a[0]=max(a[0],b.a[0]);
		for (int i=1; i<=c.a[0]; i++)
		{
			c.a[i]+=a[i]+b.a[i];
			c.a[i+1]+=c.a[i]/mod;
			c.a[i]=c.a[i]%mod;
		}
		if (c.a[c.a[0]+1]) ++c.a[0];
		return c;
	}

	num operator + (const int &b)
	{
		a[1]+=b;
		int i=1;
		while (a[i]>=mod)
		{
			a[i+1]+=a[i]/mod;
			a[i]%=mod;
			i++;
		}
		if (a[a[0]+1])a[0]++;
		return *this;
	}

	num operator = (int b)
	{
		a[0]=0;
		while (b)
		{
			a[0]++;
			a[a[0]]=b%mod;
			b/=mod;
		}
		return *this;
	}

	bool operator < (const num &b) const
	{
		if (a[0] < b.a[0]) return true;
		if (a[0] > b.a[0]) return false;
		for (int i = a[0]; i > 0; --i)
		{
			if (a[i] != b.a[i]) return a[i] < b.a[i];
		}
		return false;
	}

	void print()
	{
		printf("%d", a[a[0]]);
		for (int i = a[0]-1 ; i>=1 ; --i)
			printf("%0*d", modnum, a[i]);
		printf("\n");
	}
} res,f[maxn][maxn];

int main()
{
	//freopen("data1.txt","r",stdin);
	while( scanf("%d%d",&n,&m)==2 && n && m)
	{
		for (int i=1; i<=n; i++)
		{
			for (int j=1; j<=m; j++) scanf("%d",&a[j]);
			for (int j=1; j<=m; j++) f[j][j]=a[j];

			for (int l=1; l<=m-1; l++)
			{
				for (int i=1; i<=m-l; i++)
				{
					int j=i+l;
					f[i][j]=max(f[i+1][j]+f[i+1][j]+a[i] , f[i][j-1]+f[i][j-1]+a[j]);
				}
			}
			res=res+f[1][m]+f[1][m];
		}
		res.print();
	}
	return 0;
}
