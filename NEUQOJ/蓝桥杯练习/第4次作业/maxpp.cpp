#include<iostream>
#include<cstring>
#include<algorithm>
#define N 1000005
#define INF 0x7fffffff //代表无穷
//a[]存数组 
int sum[N],temp[N],a[N];
using namespace std;
int main()
{
	int n,m,i,j,t;
	while(cin>>m>>n)
	{
		
		for(i=1;i<=n;i++) cin>>a[i];
		memset(sum,0,sizeof(sum));
		memset(temp,0,sizeof(temp));
		
		for(i=1;i<=m;i++)//i代表分的段数 
		{
			t=-INF;
			for(j=i;j<=n;j++)//j代表第几个数，最多就能分成i段 
			{
				sum[j]=max(sum[j-1]+a[j],temp[j-1]+a[j]);
				temp[j-1]=t;
				t=max(t,sum[j]);
			}
		}
		cout<<t<<endl;
	}
	return 0;
}

//这道题意思就是从n个数里挑出m个子段，让这m个子段的和最大，但是最后一个数必须在子段里面 
//比如样例    1 3 1 2 3
//就是把1 2 3 这3个数分成1段找最大   就是1+2+3=6

//样例  2 6 -1 4 -2 3 -2 3 
//就是把 -1 4 -2 3 -2 3 这6个数找出两个子段，令和最大  这种情况下就是
// 第一段 4
// 第二段 3 -2 3  
// 4+3-2+3=8 


















