#include<cstdio>
#include<cstring>
#include<cmath>
#define Mod 100;
void mult(int a[],int b[])
{
	int c[251];
	memset(c,0,sizeof(c));
	for(int i=0; i<250; i++)
	{
		int x=0;
		for(int j=0; j<250-i; j++)
		{
			int ita=c[i+j]+a[i]*b[j]+x;
			x=ita/Mod;
			c[i+j]=ita%Mod;
		}
	}
	memcpy(a,c,250*sizeof(int)); //整块内存的复制，将c数组复制给a数组 
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",(int)(n*log10(2.0)+1));  //计算位数 
		int a[251],b[251];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		a[0]=1;
		b[0]=2;
		//快速幂算法 
		while(n)
		{
			if(n&1) mult(a,b);  //n为奇数 
			mult(b,b);
			n/=2;
		}  
	/*	for (int i=1;i<=n;i++) mult(a,b); */
		a[0]--;                //2^p-1 
		for(int i=249; i>=0; i--)
		{
			printf("%02d",a[i]);
			if(i%25==0) printf("\n");
		}  
	} 
	return 0;
}
