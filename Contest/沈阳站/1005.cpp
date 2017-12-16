#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll mod=998244353;

struct mat//矩阵类型 
{
	ll a[2][2];
};

mat matmul(mat x,mat y)//矩阵乘法 
{
	mat res;
	memset(res.a,0,sizeof(res.a));
	
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			for(int k=0;k<2;k++)
				res.a[i][j]=(res.a[i][j]+x.a[i][k]*y.a[k][j])%mod;
	
	return res;
}

mat matpow(ll n)//矩阵快速幂 
{
	mat c,res;
	c.a[0][0]=c.a[1][0]=c.a[0][1]=1;
	c.a[1][1]=0;
	
	res.a[0][0]=res.a[1][1]=1;
	res.a[0][1]=res.a[1][0]=0;
	
	while(n)
	{
		if(n%2==1)
		res=matmul(res,c);
		c=matmul(c,c);
		n/=2;
	}
	return res;
}

int main()
{
	
	ll k;
	while(cin>>k)
	{
		mat temp=matpow((2*k+3)-1); 
		//矩阵快速幂求出第2*n+3个斐波那契数，减一就是结果 
		cout<<temp.a[0][0]-1<<endl;
	}

	return 0;
}

//ans[n]=f[2*n+3]-1; 

