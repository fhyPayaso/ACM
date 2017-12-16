#include<stdio.h>
#include<algorithm>
int main()
{
	
	int a,b,t,aa,bb,gcd,lcm;
	scanf("%d%d",&a,&b);
	if(a<b) {t=a;a=b;b=t;}
	aa=a;   bb=b;
	
	while(a%b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	
	gcd=b;
	lcm=aa*bb/b;
	printf("%d %d",gcd,lcm);
	
	return 0;
} 
