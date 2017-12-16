#include<iostream>
#include<cstring>
#include<string>
using namespace std;
typedef long long ll;
const ll maxn = 50000 + 10;
int n,a[maxn*4],tree[maxn*4],ti;
char temp[10];

void buildtree(int left , int right ,int num)
{
	if(left == right) 
	{
		tree[num]=a[left];
		return ;
	}
	int mid = (left+right)/2;
	
	buildtree (left ,mid, 2*num);
	
	buildtree (mid+1,right, 2*num+1);
	
	tree[num] = tree[2*num] + tree[2*num+1];
}

void updata(int left , int right , int num , int pos , int val)
{
	if(left == right) 
	{
		tree[num]+=val;
		return ;
	}
	int mid = (right + left)/2;
	
	if(pos <= mid)
		updata( left , mid , 2*num , pos, val);
	else
		updata(mid+1 , right , 2*num+1 , pos , val);	
		
	tree[num] = tree[num*2] + tree[num*2 + 1]; 
}

int find(int left , int right , int num , int x , int y) 
{
	if(left == x && right == y) return tree[num];
	
	int mid = (left +right)/2;
	int ans=0;
	
	
	if(y<=mid)
		ans+=find(left, mid , 2*num , x , y);
	else if(x>mid) 
		ans+=find(mid+1, right, 2*num+1, x, y);
	else
	{
		ans+=find(left, mid, 2*num, x, mid);
		ans+=find(mid+1, right, 2*num+1, mid+1, y);
	}
	return ans;
}


int main()
{
	//freopen("in.txt","r",stdin);
	
	int ti;
	scanf("%d",&ti);
	for(int t=1;t<=ti;t++)
	{
		printf("Case %d:\n",t);
		
		memset(a,0,sizeof(a));
		memset(tree,0,sizeof(tree));
		scanf("%d",&n);
		for(int i=1;i<=n;i++) 
			scanf("%d",&a[i]);
			
		buildtree(1,n,1);	
		
		while(scanf("%s",temp))
		{
			int x,y;
			
			if(temp[0]=='E') break;
			
			scanf("%d %d",&x,&y);	
			
			if(temp[0]=='A')
				updata(1,n,1,x,y);
			else if(temp[0]=='S')
				updata(1,n,1,x,-y);
			else if(temp[0]=='Q')
			{
				int ans=find(1,n,1,x,y);
				printf("%d\n",ans);
			}
		}		
	}
	
	return 0;
} 
