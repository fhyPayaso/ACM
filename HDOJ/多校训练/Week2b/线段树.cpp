/*


size(l,r)/(r-l+1) <mid 对于每个区间检查是否成立 
可以转化成    size(l,r)+mid*l=temp   temp< mid*(r+1)
val[i]代表i对应区间的temp最小值 
*/ 

#include<iostream>
using namespace std;
const int maxn=60000+10;
double left,right,mid,tt,val[maxn*4];
int a[maxn],pos[maxn],dif[maxn];//?
void build(int x,int l,int r )
{
	
	val[x]=mid*l;
	dif[x]=0;
	
	if(l==r) return ;
	int m=(l+r)/2;
	build(x*2,l,m);
	build(x*2+1,m+1,r);
}


int main()
{
	int ti,n;
	
	scanf("%d",&ti);
	while(ti--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		left=0.0;right=1.0;
		
		for(int cnt=1;cnt<=20;cnt++) //二分0到1之间，次数越多精度越高 
		{
			int i;
			mid=(left+right)/2; 
			build(1,1,n);//建立线段树
			
			
			
			for(i=1;i<=n;i++) 
			{
				tt=1111111111;
				
				
				
			}
			
		}
	return 0;
} 
