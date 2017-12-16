#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
const int maxn=100000+10;
struct nn
{
	double x,y;
}node[maxn];

int temp[maxn];

bool cmpx(const nn &a,const nn &b)
{
	if(a.x!=b.x) return a.x<b.x;
	return a.y<b.y;
}

bool cmpy(int a,int b)
{
	return node[a].y<node[b].y;
}

double min(double a,double b)
{
	return a<b?a:b;
}

double dis(int a,int b)
{
	double dx=node[a].x-node[b].x;
	double dy=node[a].y-node[b].y;
	return sqrt(dx*dx+dy*dy);
}

double find(int left,int right)
{
	double d=maxn;
	if(left==right)   return d;
	if(left+1==right) return dis(left,right);
	int mid=(left+right)>>1;
	
	double ld=find(left,mid);
	double rd=find(mid+1,right);
	d=min(ld,rd);
	
	int cnt=0;
	for(int i=left;i<=right;i++)
	{		
		if(fabs(node[i].x-node[mid].x)<d)
		temp[++cnt]=i;
	}
	sort(temp+1,temp+cnt+1,cmpy);
	
	for(int i=1;i<=cnt;i++)
	{
		for(int j=i+1;j<=cnt;j++)
		{
			if(node[temp[j]].y-node[temp[i]].y>=d) break;
			d=min(d,dis(temp[i],temp[j]));
		}
	}
	return d;
}
int main()
{
	//std::ios::sync_with_stdio(false);
	int n;
	while(cin>>n)
	{
		
		if(!n) break;
		
		for(int i=1;i<=n;i++)
		//cin>>node[i].x>>node[i].y;
		//用cin即使关闭同步流也TLE,实测 
		scanf("%lf %lf",&node[i].x,&node[i].y); 
		
		sort(node+1,node+n+1,cmpx);
		cout<<fixed<<setprecision(2)<<find(1,n)/2<<endl;
	}
	return 0;
 } 
