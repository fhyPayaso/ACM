#include<stdio.h> 
int gcd(int a,int b) // 二进制GCD算法 
{
	int temp;
	if(a==b)           return a;
	if(a<b)            { temp=a;a=b;b=temp;} 
	if(b==0)           return a;
	if(a%2==0&&b%2==0) return 2*gcd(a>>1,b>>1);
	else if(a%2==0)    return gcd(a>>1,b);
	else if(b%2==0)    return gcd(a,b>>1);
	else               return gcd((a-b)>>1,b);
}
int main()
{
	int ggcd,x,y; 
	scanf("%d%d",&x,&y);
	ggcd=gcd(x,y);
	printf("%d",ggcd);
	return 0;
}
