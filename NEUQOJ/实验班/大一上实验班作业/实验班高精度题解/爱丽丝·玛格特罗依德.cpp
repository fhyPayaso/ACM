#include<cstdio>
#include<cstring>
#include<cmath>
#include <iostream>
using namespace std;
int mult2,mult3;
const int modBigInteger=4;
const int mod=10000;
const int maxl=100000;

struct BigInteger
{
	int a[maxl];
	BigInteger()
	{
		memset(a,0,sizeof(a));
	}
	BigInteger operator + (const BigInteger &b)
	{
		BigInteger c;
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
	BigInteger operator * (const BigInteger &q)
	{
		BigInteger c;
		c.a[0] = a[0]+q.a[0]-1;
		for (int i = 1; i <= a[0]; ++i)
			for (int j = 1; j <= q.a[0]; ++j)
			{
				c.a[i+j-1] += a[i]*q.a[j];
				c.a[i+j] += c.a[i+j-1] / mod;
				c.a[i+j-1] %= mod;
			}
		if (c.a[ c.a[0]+1 ]) ++c.a[0];
		return c;
	}
	BigInteger operator = (int b)
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
	void print()
	{
		printf("%d", a[a[0]]);
		for (int i = a[0]-1 ; i>=1 ; --i)
			printf("%0*d", modBigInteger, a[i]);
		printf("\n");
	}

} res,tmp;

void  destroy(int n)
{
	int t=n%3;
	if (t==1)
	{
		mult2=2;
		mult3=n/3-1;
	}
	else if (t==3)
	{
		mult3=n/3;
	}
	else if(t==2)
	{
		mult2=1;
		mult3=n/3;
	}
	else if (t==0)
	{
		mult3=n/3;
		mult2=0;
	}
}


int main()
{
	int n;
	while(cin>>n)
	{
		if (n==1) cout<<"1"<<endl;
		else if (n==0) cout<<"0"<<endl;
		else
		{
			res=1;
			tmp=3;
			mult2=0;
			mult3=0;
			destroy(n);
			cout<<mult2<<" "<<mult3<<endl;
			while(mult3)					//快速幂算法，令 res 乘上 3^mult3 
			{
				if(mult3 % 2 == 1)
					res = res*tmp;
				tmp = (tmp * tmp ) ;
				mult3=mult3/2;
			}
			tmp=2;
			while (mult2)					//快速幂算法，令 res 乘上 2^mult3 
			{
				if(mult2 % 2 == 1)
					res = res*tmp;
				tmp = (tmp * tmp ) ;
				mult2=mult2/2;
			}
			res.print();					//输入res，即答案 
		}
	}
}
